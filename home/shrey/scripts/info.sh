#!/bin/bash

date +"%I:%M %p - %a, %d %b %Y"
echo "Battery: $(upower -i /org/freedesktop/UPower/devices/battery_BAT0 | grep percentage | awk '{ print $2 }')"
echo "󰤟 $(iwgetid -r)"
echo "Airdopes connected: $(bluetoothctl info "$Airdopes"  | grep Connected | awk '{print $2}'), Battery: $(upower -i /org/freedesktop/UPower/devices/headset_dev_41_42_C9_BD_BA_13 | grep percentage | awk '{ print $2 }')"
