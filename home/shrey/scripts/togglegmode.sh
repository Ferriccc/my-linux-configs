#!/bin/bash

export SUDO_ASKPASS="/home/shrey/scripts/pass.sh"

if [ "$(cat /gmode.stat)" -eq 0 ]; then
    echo "\_SB.AMWW.WMAX 0 0x15 {1, 0xab, 0x00, 0x00}" | sudo -A tee /proc/acpi/call
    echo "\_SB.AMWW.WMAX 0 0x25 {1, 0x01, 0x00, 0x00}" | sudo -A tee /proc/acpi/call
    echo "100" | sudo -A tee /gmode.stat
else
    echo "\_SB.AMWW.WMAX 0 0x15 {1, 0xa0, 0x00, 0x00}" | sudo -A tee /proc/acpi/call
    echo "\_SB.AMWW.WMAX 0 0x25 {1, 0x00, 0x00, 0x00}" | sudo -A tee /proc/acpi/call
    echo "0" | sudo -A tee /gmode.stat
fi

