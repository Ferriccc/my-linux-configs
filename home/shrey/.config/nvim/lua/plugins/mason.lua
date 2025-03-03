-- lsp servers and formatter installer
return {
    {
        "williamboman/mason.nvim",
        config = true,
    },
    {
        "WhoIsSethDaniel/mason-tool-installer.nvim",
        opts = {
            ensure_installed = {
                "ansible-language-server",
                "ansible-lint",
                "json-lsp",
                "bash-language-server",
                "clangd",
                "css-lsp",
                "lua-language-server",
                "pyright",
                "rust-analyzer",
                "taplo",
                "gopls",
            },
        },
    },
}
