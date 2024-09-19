#!/bin/bash

# Show a menu using wofi --show=dmenu with Nerd Font icons
chosen=$(echo -e "\uf186  Suspend\n\uf2dc  Hibernate\n\uf011  Shutdown\n\uf021  Reboot" | wofi -c "$HOME/.config/waybar/power_menu_wofi" --show=dmenu)

# Extract the actual option by removing icons and leading/trailing spaces
chosen=$(echo "$chosen" | awk '{print $2}')

# Perform the action based on the selection
case "$chosen" in
    Suspend)
        systemctl suspend
        ;;
    Hibernate)
        systemctl hibernate
        ;;
    Shutdown)
        systemctl poweroff
        ;;
    Reboot)
        systemctl reboot
        ;;
    *)
        echo "Invalid option: $chosen"
        ;;
esac
