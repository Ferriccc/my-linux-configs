#!/bin/bash

pass=$(wmenu -p "Enter sudo password: " <&-)
echo "$pass"
