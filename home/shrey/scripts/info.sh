#!/bin/bash

info=$(date +"%I:%M%p, %A %d %B")
bat=$(upower -i /org/freedesktop/UPower/devices/battery_BAT0 | grep percentage | awk '{ print $2 }')
uptime=$(uptime -p)

notify-send "System Info" "$info
Battery: $bat
Uptime: $uptime"
