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
                "json-lsp",
                "bash-language-server",
                "clang-format",
                "css-lsp",
                "lua-language-server",
                "pyright",
                "rust-analyzer",
                "stylua",
                "yapf",
                "taplo",
                "eslint-lsp",
            },
        },
    },
}
