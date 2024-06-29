#!/bin/bash

export SUDO_ASKPASS=configs/home/shrey/scripts/askPass.sh

sudo -A su -c 'echo "\_SB.AMWW.WMAX 0 0x15 {1, 0xa0, 0x00, 0x00}" > /proc/acpi/call'
sudo -A su -c 'echo "\_SB.AMWW.WMAX 0 0x25 {1, 0x00, 0x00, 0x00}" > /proc/acpi/call'
