-- augroups
local Highlight = vim.api.nvim_create_augroup("Highlight", { clear = true })
local General = vim.api.nvim_create_augroup("General", { clear = true })
local autosave_group = vim.api.nvim_create_augroup("AutoSave", { clear = true })

-- autocommand for enable quiting out from some specific files by pressing [q]
vim.api.nvim_create_autocmd("FileType", {
    pattern = { "gf", "help", "man", "lspinfo" },
    group = General,
    callback = function()
        vim.keymap.set("n", "q", ":close <CR>", { silent = true, noremap = true })
    end,
})

-- autocommand for highlighting the yanked (copied) text
vim.api.nvim_create_autocmd("TextYankPost", {
    group = General,
    callback = function()
        require("vim.highlight").on_yank({ higroup = "Visual", timeout = 200 })
    end,
})

-- autocommand to addon some formatoptions
vim.api.nvim_create_autocmd("BufWinEnter", {
    group = General,
    callback = function()
        vim.cmd("set formatoptions-=cro")
    end,
})

-- autocommand for disabling quickfixlist to get listed in buffer entry
vim.api.nvim_create_autocmd("FileType", {
    pattern = "qf",
    group = General,
    callback = function()
        vim.cmd("set nobuflisted")
    end,
})

-- autocommand for disabling numbers and relative numbers for terminal view
vim.api.nvim_create_autocmd("TermOpen", {
    group = General,
    callback = function()
        vim.opt_local.number, vim.opt_local.relativenumber = false, false
    end,
})

-- Auto-save on InsertLeave, TextChanged, and FocusLost events, excluding oil.nvim buffers
-- vim.api.nvim_create_autocmd({ "InsertLeave", "TextChanged", "FocusLost" }, {
--     group = autosave_group,
--     pattern = "*",
--     callback = function()
--         if vim.bo.filetype ~= "oil" then
--             vim.cmd("silent! wall")
--         end
--     end,
-- })

-- set indent of size 2 only in cpp files
vim.api.nvim_create_autocmd("FileType", {
    pattern = "cpp",
    callback = function()
        vim.opt_local.shiftwidth = 2
        vim.opt_local.tabstop = 2
        vim.opt_local.expandtab = true
    end,
})
