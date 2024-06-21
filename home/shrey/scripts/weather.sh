#!/bin/bash

# actual_temp=$(curl -s 'wttr.in/Ahmedabad+Gujarat?format=%t')
feels_temp=$(curl -s 'wttr.in/Ahmedabad+Gujarat?format=%f' | grep -o '[0-9]*')
# echo "$actual_temp ($feels_temp)"
echo "$feels_temp°C"
