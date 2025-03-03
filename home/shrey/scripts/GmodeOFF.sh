#!/bin/bash

export SUDO_ASKPASS="/home/shrey/scripts/pass.sh"

echo "\_SB.AMWW.WMAX 0 0x15 {1, 0xa0, 0x00, 0x00}" | sudo -A tee /proc/acpi/call
echo "\_SB.AMWW.WMAX 0 0x25 {1, 0x00, 0x00, 0x00}" | sudo -A tee /proc/acpi/call
