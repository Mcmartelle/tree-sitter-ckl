# Tree-sitter with Helix

The repo name `tree-sitter-x` where x is the name of the language, not the file extension to be used.

IMPORTANT: Only the npm version of tree-sitter-cli has the `build` subcommand which can make the .so grammar files.  The cargo version can only build .wasm files.

## For ckl on macos, the files need to be:
~/.config/helix/runtime
 .
├──  grammars
│  └──  ckl.so
└──  queries
   └──  ckl
      └──  highlights.scm

## and the language.toml
```toml
[[language]]
name = "ckl"
scope = "source.ckl"
grammar = "ckl"
file-types = ["ckl"]
shebangs = []
roots = []
auto-format = false

[[grammar]]
name = "ckl"
source = {path = "~/.config/helix/runtime/grammars/ckl.so"}
```

## and set HELIX_RUNTIME in config.fish
```fish
export HELIX_RUNTIME='~/.config/helix/runtime'
```

use `hx --health` to see which languages have highlighting support, etc.

Within helix run `:log-open` to see errors.


