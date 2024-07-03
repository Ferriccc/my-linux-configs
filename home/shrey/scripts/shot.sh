#!/usr/bin/fish
# for some reason using /bin/bash was not working and fish worked!

grim -g "$(slurp)" $HOME/screenshots/last.png
wl-copy < $HOME/screenshots/last.png
