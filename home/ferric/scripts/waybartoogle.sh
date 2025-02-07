#!/bin/bash

program_name="waybar"

# Check if the program is running
if pgrep -x "$program_name" > /dev/null; then
    killall "$program_name"
else
    waybar &
fi

