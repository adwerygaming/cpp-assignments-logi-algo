#!/usr/bin/env bash
# build.sh - compile all .cpp files in the repo root into bin/<basename>
# Usage: ./build.sh

set -u

ROOT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
cd "$ROOT_DIR" || exit 1

mkdir -p bin
fail_count=0
found=0

for src in ./*.cpp; do
    [ -e "$src" ] || continue
    found=1
    fname="$(basename "$src")"
    name="${fname%.cpp}"
    out="bin/$name"

    echo "Compiling $fname -> $out"
    if g++ -std=c++17 -O2 -Wall -Wextra -pedantic "$src" -o "$out"; then
        echo "  [OK] $out"
        # make binary executable (non-harmful if already executable)
        chmod +x "$out" 2>/dev/null || true
    else
        echo "  [FAIL] $fname failed to compile" >&2
        fail_count=$((fail_count + 1))
    fi
done

if [ "$found" -eq 0 ]; then
    echo "No .cpp files found in $ROOT_DIR"
    exit 0
fi

if [ "$fail_count" -ne 0 ]; then
    echo "Build finished with $fail_count failure(s)." >&2
    exit 1
fi

echo "Build finished successfully. Binaries are in: $ROOT_DIR/bin"
exit 0
