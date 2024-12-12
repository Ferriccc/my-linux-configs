#!/bin/bash

Airdopes="41:42:11:7D:94:6F"

currentState=$(bluetoothctl info "$Airdopes" | grep Connected | awk '{print $2}')

if [ "$currentState" == "no" ]; then
    bluetoothctl connect "$Airdopes"
else
    bluetoothctl disconnect "$Airdopes"
fi

