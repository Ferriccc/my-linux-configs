#!/bin/bash

export SUDO_ASKPASS="/home/shrey/scripts/pass.sh"

sudo -A /usr/bin/powertop --auto-tune
