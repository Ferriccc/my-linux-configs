# Starship prompt
starship init fish | source

# Enable Transient prompt (requires starship to be loaded)
enable_transience

# Better cd
zoxide init fish | source

# disable greeting help
set fish_greeting

# Use of trash instead of rm command to delete stuff
function rm
    echo "Use trash instead!"
end

function cmp
    set target $argv[1]
    qt cmp -c ./cor.cpp -g ./gen.cpp -t "$target" --break-bad --save-bad
end

function chk
    set target $argv[1]
    qt check -c ./check.cpp -g ./gen.cpp -t "$target" --break_bad --save-bad
end

alias cat="bat"
alias ls="eza -l --git --color=always --icons=always --sort=extension --no-user --no-permissions"
alias cd="z"
