local wezterm = require 'wezterm'

local config = wezterm.config_builder()

config.color_scheme = 'Gruvbox dark, hard (base16)'
config.font = wezterm.font("JetBrainsMono Nerd Font")
config.default_prog = { '/usr/bin/bash' }
config.window_background_opacity = 0.9

return config
