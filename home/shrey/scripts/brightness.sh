#!/bin/bash

brightnessctl s 5%"$1"
notify-send -r 999 "Brightness: $(brightnessctl i | grep "Current brightness" | awk '{print $4}' | awk '{gsub(/[()]/, ""); print}')"
