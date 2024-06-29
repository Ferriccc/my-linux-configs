#!/bin/bash

sink="$(pactl get-default-sink)"
raw_volume=$(pactl get-sink-volume "$sink")
volume=$(awk -F '[[:space:]%/]+' '{ print $4 }' <<< "$raw_volume")

echo "$volume"

increase() {
	# TODO: check for boundaries
	pactl set-sink-volume "$sink" "$((volume + 5))"%
}

decrease() {
	# TODO: check for boundaries
	pactl set-sink-volume "$sink" "$((volume - 5))"%
}
