-- map leader
vim.g.mapleader = " "
local keymap = vim.keymap
local opts = { silent = true, noremap = true }

-- General
keymap.set("v", "<", "<gv", opts)
keymap.set("v", ">", ">gv", opts)
keymap.set("i", "jj", "<Esc>")

-- Window splits
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

-- Toggle comments
keymap.set("n", "<leader>c", ":Commentary<cr>", opts)
keymap.set("v", "<leader>c", ":Commentary<cr>", opts)

-- Formatting
keymap.set("n", "<C-f>", ":lua vim.lsp.buf.format{ async = true }<cr>", opts)
-- keymap.set("n", "<C-s>", ":w<cr>", opts)

-- Telescope
keymap.set("n", "<leader>ff", "<cmd> Telescope find_files follow=true<cr>", opts)
keymap.set("n", "<leader>gc", "<cmd> Telescope git_branches follow=true<cr>", opts)
keymap.set("n", "<leader>fw", "<cmd> Telescope live_grep follow=true<cr>", opts)
keymap.set("n", "<leader>fh", "<cmd> Telescope help_tags  follow=true<cr>", opts)

-- Compile and Run (cpp)
keymap.set("n", "<C-0>", ":w <bar> :!g++ % && ./a.out < in.txt && trash ./a.out<cr>", opts)

-- Navigation
keymap.set({"n", "v"}, "<C-u>", "<C-u>zz", opts);
keymap.set({"n", "v"}, "<C-d>", "<C-d>zz", opts);
keymap.set({"n", "v"}, "j", "jzz", opts);
keymap.set({"n", "v"}, "k", "kzz", opts);
keymap.set({"n", "v"}, "<C-j>", "}zz", opts);
keymap.set({"n", "v"}, "<C-k>", "{zz", opts);

keymap.set({"n", "v"}, "QQ", ":q<enter>", opts)
keymap.set({"n", "v"}, "WW", ":wa<enter>", opts)
keymap.set({"n", "v"}, "E", "$", opts)
keymap.set({"n", "v"}, "B", "^", opts)
