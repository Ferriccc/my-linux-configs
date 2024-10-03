#!/bin/bash

Airdopes="41:42:C9:BD:BA:13"

currentState=$(bluetoothctl info "$Airdopes" | grep Connected | awk '{print $2}')

if [ "$currentState" == "no" ]; then
    bluetoothctl connect "$Airdopes"
else
    bluetoothctl disconnect "$Airdopes"
fi

