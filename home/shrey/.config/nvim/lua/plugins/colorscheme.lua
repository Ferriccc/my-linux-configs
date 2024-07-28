-- colorscheme (catppuccin with nvchad flavour).
return {
	{
		"catppuccin/nvim",
		name = "catppuccin",
		priority = 1000,
		config = true,
	},

	{
		"ellisonleao/gruvbox.nvim",
		name = "gruvbox",
		priority = 1000,
		config = true,
	},

	{
		"neanias/everforest-nvim",
		name = "everforest",
		priority = 1000,
		config = true,
	},

	{
		"rose-pine/neovim",
		name = "rose-pine",
		priority = 1000,
		config = true,
	},

	{
		"metalelf0/jellybeans-nvim",
		dependencies = {
			"rktjmp/lush.nvim",
		},
		name = "jellybeans",
		priority = 1000,
    config = function ()
    end
	},
}
