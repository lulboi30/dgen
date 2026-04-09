#! /bin/bash

echo "Compiling..."
gcc -std=c99 ./src/main.c -o ./dgen
echo "Done! run ./dgen"
