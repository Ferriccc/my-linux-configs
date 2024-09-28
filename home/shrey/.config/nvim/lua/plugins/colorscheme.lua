-- colorscheme (catppuccin with nvchad flavour).
return {
	{
		"folke/tokyonight.nvim",
		lazy = false,
		priority = 1000,
		opts = {},
	},
	{
		"scottmckendry/cyberdream.nvim",
		lazy = false,
		priority = 1000,
		opts = function(_, opts)
			opts.transparent = true
			opts.italic_comments = true
			opts.borderless_telescope = false
		end,
	},
	{
		"catppuccin/nvim",
		name = "catppuccin",
		priority = 1000,
		config = function() end,
	},
	{
		"ellisonleao/gruvbox.nvim",
		name = "gruvbox",
		priority = 1000,
		config = function()
			require("gruvbox").setup({
				contrast = "hard",
			})
		end,
	},
	{
		"neanias/everforest-nvim",
		name = "everforest",
		version = false,
		lazy = false,
		priority = 1000, -- make sure to load this before all the other start plugins
		-- Optional; default configuration will be used if setup isn't called.
		config = function()
			require("everforest").setup({
				-- Your config here
			})
		end,
	},
	{
		"rose-pine/neovim",
		name = "rose-pine",
		config = function()
			require("rose-pine").setup({
				-- Your config here
			})
		end,
	},
	{
		"metalelf0/jellybeans-nvim",
		dependencies = {
			"rktjmp/lush.nvim",
		},
		lazy = false,
	},
}
