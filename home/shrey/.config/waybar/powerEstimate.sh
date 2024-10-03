#!/bin/bash

get_battery_time() {
    battery_percentage=$(upower -i $(upower -e | grep battery) | grep -E "percentage" | awk '{print $2}' | sed 's/%//')
    battery_status=$(upower -i $(upower -e | grep battery) | grep -E "state" | awk '{print $2}')
    
    if [ "$battery_status" = "discharging" ]; then
        time_left=$(upower -i $(upower -e | grep battery) | grep -E "time to empty" | awk '{print $4, $5}')
        # echo "$time_left"
    elif [ "$battery_status" = "charging" ]; then
        time_left=$(upower -i $(upower -e | grep battery) | grep -E "time to full" | awk '{print $4, $5}')
        # echo "$time_left"
    else
        echo "  on AC"
        return
    fi

    time_quantity=$(echo $time_left | awk '{print $1}')
    time_left_minutes=$(echo "$time_quantity * 60" | bc)

    current_time=$(date +%s)  # Current time in seconds since epoch
    time_left_seconds=$(echo "$time_left_minutes * 60" | bc)  # Convert time_left to seconds
    end_time=$(echo "$current_time + $time_left_seconds" | bc)

    # Convert the future end time to human-readable format
    end_time_formatted=$(date -d "@$end_time" +'%I:%M %p')

    if (( battery_percentage <= 20 )); then
        icon=""
    elif (( battery_percentage <= 40 )); then
        icon=""
    elif (( battery_percentage <= 60 )); then
        icon=""
    elif (( battery_percentage <= 80 )); then
        icon=""
    else
        icon=""
    fi

    echo "$icon  upto $end_time_formatted"
}

get_battery_time
