#!/bin/sh

clang_format="$HOME/Library/Application Support/Alcatraz/Plug-ins/ClangFormat/bin/clang-format"

find ../../* \
    \( -name '*.[ch]pp' -o -name '*.[mh]' \) \
    -type f \
    ! -ipath '*/Pods/*' \
    ! -ipath '*/build/*' \
    ! -ipath '*/kext/*/*include/*' \
    ! -ipath '*/src/bridge/output/*' \
    \
    | xargs "$clang_format" -i
