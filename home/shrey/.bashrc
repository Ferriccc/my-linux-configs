# If not running interactively, don't do anything
[[ $- != *i* ]] && return

# Set stack size to unlimited
ulimit -s unlimited

# Initialize Starship prompt
eval "$(starship init bash)"

# Initialize Zoxide
eval "$(zoxide init bash)"

# functions
function cmp() {
    local target="$1"
    ./qt cmp -c ./cor.cpp -g ./gen.cpp -t "$target" --break-bad --save-bad
}
function chk() {
    local target="$1"
    ./qt check -c ./check.cpp -g ./gen.cpp -t "$target" --break_bad --save-bad
}

export EDITOR='nvim'

# aliases
alias cat="bat"
alias ls="exa -l --git --color=always --icons --sort=extension --no-user --no-permissions"
alias lt="exa --tree -l --git --color=always --icons --sort=extension --no-permissions --no-user"
alias cd="z"
alias dotsetup="ansible-playbook -K $HOME/playbooks/wsl_playbook.yml --ask-vault-pass --tags setup"
alias dotsync="ansible-playbook -K $HOME/playbooks/wsl_playbook.yml --ask-vault-pass --tags sync"
alias dotpush="ansible-playbook -K $HOME/playbooks/wsl_playbook.yml --ask-vault-pass --tags push"

# enable case-insensitive auto-completion
shopt -s nocaseglob
bind 'set completion-ignore-case on'

# enable history search with up and down arrows
bind '"\e[A": history-search-backward'
bind '"\e[B": history-search-forward'

PS1='[\u@\h \W]\$ '

export PATH="$PATH:$HOME/.local/bin"
export PATH="$PATH:$HOME/.cargo/bin"
export PATH="$PATH:$HOME/scripts"

