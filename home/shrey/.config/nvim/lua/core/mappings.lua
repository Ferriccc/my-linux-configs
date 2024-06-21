-- map leader
vim.g.mapleader = " "
local keymap = vim.keymap
local opts = { silent = true, noremap = true }

-- General
keymap.set("v", "<", "<gv", opts)
keymap.set("v", ">", ">gv", opts)
keymap.set("i", "jj", "<Esc>")

-- Window
keymap.set("n", "<C-\\>", ":vsplit <cr>", opts)
keymap.set("n", "<C-h>", "<C-w>h", opts)
keymap.set("n", "<C-j>", "<C-w>j", opts)
keymap.set("n", "<C-k>", "<C-w>k", opts)
keymap.set("n", "<C-l>", "<C-w>l", opts)
keymap.set("n", "<C-Up>", ":resize -2 <cr>", opts)
keymap.set("n", "<C-Down>", ":resize +2 <cr>", opts)
keymap.set("n", "<C-Left>", ":vertical resize -2 <cr>", opts)
keymap.set("n", "<C-Right>", ":vertical resize +2 <cr>", opts)

-- Tabs
keymap.set("n", "<C-n>", ":tabnew<cr>", opts)
keymap.set("n", "<S-Tab>", "<cmd> BufferLineCyclePrev <cr>", opts)
keymap.set("n", "<Tab>", "<cmd> BufferLineCycleNext <cr>", opts)

-- Commentary
keymap.set("n", "<C-/>", ":Commentary<cr>", opts)
keymap.set("v", "<C-/>", ":Commentary<cr>", opts)

-- format on save
keymap.set("n", "<C-s>", ":w<cr> <bar> :lua vim.lsp.buf.format{ async = true }<cr>", opts)

-- Oil.nvim
keymap.set("n", "<leader>e", function()
	require("oil").toggle_float()
end, opts)

-- Telescope
keymap.set("n", "<leader>ff", "<cmd> Telescope find_files <cr>", opts)
keymap.set("n", "<leader>gc", "<cmd> Telescope git_branches <cr>", opts)
keymap.set("n", "<leader>fw", "<cmd> Telescope live_grep <cr>", opts)
keymap.set("n", "<leader>fh", "<cmd> Telescope help_tags  <cr>", opts)

-- Compile and Run
keymap.set("n", "<C-0>", ":w <bar> :!g++ % && ./a.out < in.txt && trash ./a.out<cr>", opts)
