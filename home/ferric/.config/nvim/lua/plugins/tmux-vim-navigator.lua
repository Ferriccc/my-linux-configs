return {
	"christoomey/vim-tmux-navigator",
	lazy = false,
	cmd = {
		"TmuxNavigateLeft",
		"TmuxNavigateDown",
		"TmuxNavigateUp",
		"TmuxNavigateRight",
		"TmuxNavigatePrevious",
	},
	keys = {
		{ "<M-h>", "<cmd><C-U>TmuxNavigateLeft<cr>" },
		{ "<M-j>", "<cmd><C-U>TmuxNavigateDown<cr>" },
		{ "<M-k>", "<cmd><C-U>TmuxNavigateUp<cr>" },
		{ "<M-l>", "<cmd><C-U>TmuxNavigateRight<cr>" },
	},
}
