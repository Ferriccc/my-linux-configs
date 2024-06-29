#!/bin/bash

env LD_PRELOAD=/usr/lib/spotify-adblock.so spotify --ozone-platform=wayland --uri=%U
