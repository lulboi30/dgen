#! /bin/bash

echo "Compiling..."
gcc -std=c99 ./dgen/main.c -o ./dgen
echo "Done! run ./dgen"
