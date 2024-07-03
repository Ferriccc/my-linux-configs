# for some reason using /bin/bash was not working and fish worked!

#!/usr/bin/fish

grim -g "$(slurp)" $HOME/screenshots/last.png
wl-copy < $HOME/screenshots/last.png
