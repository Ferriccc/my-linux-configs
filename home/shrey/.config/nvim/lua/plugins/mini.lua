return {
    "echasnovski/mini.nvim",
    version = false,
    config = function()
        require("mini.completion").setup()
        require("mini.icons").setup()
        require("mini.move").setup()
        require("mini.pairs").setup()
        require("mini.surround").setup()
        require("mini.jump2d").setup()
        require("mini.pick").setup()
        require("mini.starter").setup()

        require("mini.cursorword").setup()

        require("mini.indentscope").setup()
        require("mini.statusline").setup()
        require("mini.tabline").setup()

        local hipatterns = require("mini.hipatterns")
        hipatterns.setup({
            highlighters = {
                -- Highlight standalone 'FIXME', 'HACK', 'TODO', 'NOTE'
                fixme = { pattern = "%f[%w]()FIXME()%f[%W]", group = "MiniHipatternsFixme" },
                hack = { pattern = "%f[%w]()HACK()%f[%W]", group = "MiniHipatternsHack" },
                todo = { pattern = "%f[%w]()TODO()%f[%W]", group = "MiniHipatternsTodo" },
                note = { pattern = "%f[%w]()NOTE()%f[%W]", group = "MiniHipatternsNote" },

                -- Highlight hex color strings (`#rrggbb`) using that color
                hex_color = hipatterns.gen_highlighter.hex_color(),
            },
        })

        require("mini.files").setup({
            window = {
                preview = true,
            },
        })

        local gen_loader = require("mini.snippets").gen_loader
        require("mini.snippets").setup({
            snippets = {
                -- Load custom file
                gen_loader.from_file("~/.config/nvim/snippets/cpp.json"),
                -- Load snippets based on current language by reading files from
                -- "snippets/" subdirectories from 'runtimepath' directories.
                -- gen_loader.from_lang(),
            },
        })
    end,
}
