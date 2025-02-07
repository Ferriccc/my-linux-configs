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

        local function on_attach(client, bufnr)
            local opts = { noremap = true, silent = true, buffer = bufnr }
            local keymap = vim.keymap.set

            if client.supports_method("textDocument/semanticTokens") then
                client.server_capabilities.semanticTokensProvider = nil
            end
        end

        local capabilities = vim.lsp.protocol.make_client_capabilities()
        capabilities.textDocument.completion.completionItem = {
            documentationFormat = { "markdown", "plaintext" },
            snippetSupport = true,
            preselectSupport = true,
            insertReplaceSupport = true,
            labelDetailsSupport = true,
            deprecatedSupport = true,
            commitCharactersSupport = true,
            tagSupport = { valueSet = { 1 } },
            resolveSupport = {
                properties = {
                    "documentation",
                    "detail",
                    "additionalTextEdits",
                },
            },
        }

        -- Change the Diagnostic symbols in the sign column (gutter)
        -- (not in youtube nvim video)
        local signs = { Error = " ", Warn = " ", Hint = "󰠠 ", Info = " " }
        for type, icon in pairs(signs) do
            local hl = "DiagnosticSign" .. type
            vim.fn.sign_define(hl, { text = icon, texthl = hl, numhl = "" })
        end

        -- configure lua server (with special settings)
        lspconfig["lua_ls"].setup({
            on_attach = on_attach,
            capabilities = capabilities,
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
            capabilities = capabilities,
            cmd = { "clangd", "-header-insertion=never" },
        })

        -- configure python server
        lspconfig["pyright"].setup({
            on_attach = on_attach,
            capabilities = capabilities,
        })

        -- configure bash server
        lspconfig["bashls"].setup({
            on_attach = on_attach,
            capabilities = capabilities,
        })

        -- configure css server
        lspconfig["cssls"].setup({
            on_attach = on_attach,
            capabilities = capabilities,
        })

        -- configure jsonls server
        lspconfig["jsonls"].setup({})

        -- configure toml server
        lspconfig["taplo"].setup({})

        -- configure javascript server
        lspconfig["eslint"].setup({})

        -- configure rust server
        lspconfig["rust_analyzer"].setup({
            on_attach = on_attach,
            capabilities = capabilities,
            filetypes = { "rust" },
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
