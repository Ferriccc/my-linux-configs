#!/bin/bash

pactl set-sink-volume @DEFAULT_SINK@ "$1"5%
notify-send -r 998 "Volume: $(pactl get-sink-volume @DEFAULT_SINK@ | awk '{print $5}')"
