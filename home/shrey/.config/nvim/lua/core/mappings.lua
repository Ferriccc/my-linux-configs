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
keymap.set("n", "<S-Tab>", "<cmd> tabprev <cr>", opts)
keymap.set("n", "<Tab>", "<cmd> tabnext <cr>", opts)

-- save
-- keymap.set("n", "<leader>s", ":w<cr> <bar> :lua vim.lsp.buf.format{ async = true }<cr>", opts)
keymap.set("n", "<leader>s", ":w<cr>", opts)

-- mini.files
keymap.set("n", "<leader>e", ":lua MiniFiles.open()<cr>", opts)

-- Telescope
keymap.set("n", "<leader>ff", ":Pick files<cr>", opts)
keymap.set("n", "<leader>fw", ":Pick grep_live<cr>", opts)
