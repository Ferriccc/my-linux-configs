--lsp support.
return {
    "neovim/nvim-lspconfig",
    dependencies = {
        "WhoIsSethDaniel/mason-tool-installer.nvim",
        "williamboman/mason.nvim",
        "williamboman/mason-lspconfig.nvim",
    },
    event = { "BufReadPost", "BufNewFile" },

    config = function()
        local lspconfig = require("lspconfig")

        vim.diagnostic.config({
            float = { border = "rounded" },
        })

        vim.lsp.handlers["textDocument/hover"] = vim.lsp.with(vim.lsp.handlers.hover, {
            border = "rounded",
        })

        vim.lsp.handlers["textDocument/signatureHelp"] = vim.lsp.with(vim.lsp.handlers.signature_help, {
            border = "rounded",
        })

        vim.lsp.handlers["textDocument/publishDiagnostics"] = vim.lsp.with(vim.lsp.diagnostic.on_publish_diagnostics, {
            update_in_insert = true,
        })

        -- Change the Diagnostic symbols in the sign column (gutter)
        -- (not in youtube nvim video)
        local signs = { Error = " ", Warn = " ", Hint = "󰠠 ", Info = " " }
        for type, icon in pairs(signs) do
            local hl = "DiagnosticSign" .. type
            vim.fn.sign_define(hl, { text = icon, texthl = hl, numhl = "" })
        end

        -- Function to format on save
        local on_attach = function(client, bufnr)
            if client.server_capabilities.documentFormattingProvider then
                vim.api.nvim_create_autocmd("BufWritePre", {
                    buffer = bufnr,
                    callback = function()
                        vim.lsp.buf.format({ async = false })
                    end,
                })
            end
        end

        -- configure lua server (with special settings)
        lspconfig["lua_ls"].setup({
            on_attach = on_attach,
            -- on_init = function(client, _)
            -- 	if client.server_capabilities then
            -- 		client.server_capabilities.documentFormattingProvider = false
            -- 		client.server_capabilities.semanticTokensProvider = false -- turn off semantic tokens
            -- 	end
            -- end,
            settings = {
                Lua = {
                    diagnostics = {
                        globals = { "vim" },
                    },
                    workspace = {
                        library = {
                            [vim.fn.expand("$VIMRUNTIME/lua")] = true,
                            [vim.fn.expand("$VIMRUNTIME/lua/vim/lsp")] = true,
                            [vim.fn.stdpath("data") .. "/lazy/ui/nvchad_types"] = true,
                            [vim.fn.stdpath("data") .. "/lazy/lazy.nvim/lua/lazy"] = true,
                        },
                        maxPreload = 100000,
                        preloadFileSize = 10000,
                    },
                },
            },
        })

        -- setup clangd server
        lspconfig["clangd"].setup({
            on_attach = on_attach,
            cmd = { "clangd", "-header-insertion=never" },
        })

        -- configure python server
        lspconfig["pyright"].setup({
            on_attach = on_attach,
        })

        -- configure bash server
        lspconfig["bashls"].setup({
            on_attach = on_attach,
        })

        -- configure css server
        lspconfig["cssls"].setup({
            on_attach = on_attach,
        })

        -- configure jsonls server
        lspconfig["jsonls"].setup({
            on_attach = on_attach,
        })

        -- configure toml server
        lspconfig["taplo"].setup({
            on_attach = on_attach,
        })

        -- configure go server
        lspconfig["gopls"].setup({
            on_attach = on_attach,
        })

        -- configure ansiblels server (yml filename should end with ansible to attach it)
        -- check options.lua file for the function which auto sets the filetype for yml files ending with ansible
        lspconfig["ansiblels"].setup({
            on_attach = on_attach,
        })

        -- configure rust server
        lspconfig["rust_analyzer"].setup({
            on_attach = on_attach,
            settings = {
                ["rust-analyzer"] = {
                    cargo = {
                        allFeatures = true,
                    },
                },
            },
        })
    end,
}
