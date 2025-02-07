#!/bin/bash

export SUDO_ASKPASS="/home/ferric/scripts/pass.sh"

# su -c 'echo "\_SB.AMWW.WMAX 0 0x15 {1, 0xa0, 0x00, 0x00}" > /proc/acpi/call'
# su -c 'echo "\_SB.AMWW.WMAX 0 0x25 {1, 0x00, 0x00, 0x00}" > /proc/acpi/call'
echo "\_SB.AMWW.WMAX 0 0x15 {1, 0xa0, 0x00, 0x00}" | sudo -A tee /proc/acpi/call
echo "\_SB.AMWW.WMAX 0 0x25 {1, 0x00, 0x00, 0x00}" | sudo -A tee /proc/acpi/call
echo powersupersave | sudo tee /sys/module/pcie_aspm/parameters/policy
