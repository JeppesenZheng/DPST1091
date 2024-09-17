#!/bin/dash

# Setup for tests
# Colours for the output
GREEN='\033[0;32m'
RED='\033[0;31m'
NOCOL='\033[0m'

# Compile the C program using dcc
dcc -o bubble_tea bubble_tea.c

# Check if compilation was successful
if [ $? -ne 0 ]; then
    echo "${RED}Compilation failed. Tests cannot be run.${NOCOL}"
    exit 1
fi

# Add current directory to PATH so scripts can still be executed from it after we cd
PATH="$PATH:$(pwd)"

# Test01: MILK TEA with TAPIOCA PEARLS, 1 topping, size REGULAR
echo "Test01: Testing MILK TEA with TAPIOCA PEARLS, 1 topping, size REGULAR"
echo "0\n0\n1\nR\n" | ./bubble_tea > test01_output.txt 2>/dev/null
echo "0\n0\n1\nR\n" | ./answer > answer.txt 2>/dev/null
if diff -u test01_output.txt answer.txt > diff_output.txt 2>&1; then
    echo "${GREEN}Test01 PASSED${NOCOL}"
else
    echo "${RED}Test01 FAILED${NOCOL}"
    cat diff_output.txt
fi
rm test01_output.txt

# Test02: FRUIT TEA with JELLY, 3 toppings, size LARGE
echo "Test02: Testing FRUIT TEA with JELLY, 3 toppings, size LARGE"
echo "1\n1\n3\nL\n" | ./bubble_tea > test02_output.txt 2>/dev/null
echo "1\n1\n3\nL\n" | ./answer > answer.txt 2>/dev/null
if diff -u test02_output.txt answer.txt > diff_output.txt 2>&1; then
    echo "${GREEN}Test02 PASSED${NOCOL}"
else
    echo "${RED}Test02 FAILED${NOCOL}"
    cat diff_output.txt
fi
rm test02_output.txt

# Test03: TARO MILK with POPPING PEARLS, 0 toppings, size REGULAR
echo "Test03: Testing TARO MILK with POPPING PEARLS, 0 toppings, size REGULAR"
echo "2\n2\n0\nR\n" | ./bubble_tea > test03_output.txt 2>/dev/null
echo "2\n2\n0\nR\n" | ./answer > answer.txt 2>/dev/null
if diff -u test03_output.txt answer.txt > diff_output.txt 2>&1; then
    echo "${GREEN}Test03 PASSED${NOCOL}"
else
    echo "${RED}Test03 FAILED${NOCOL}"
    cat diff_output.txt
fi
rm test03_output.txt

# Test04: MATCHA LATTE with ALOE VERA, 5 toppings, size LARGE
echo "Test04: Testing MATCHA LATTE with ALOE VERA, 5 toppings, size LARGE"
echo "3\n3\n5\nL\n" | ./bubble_tea > test04_output.txt 2>/dev/null
echo "3\n3\n5\nL\n" | ./answer > answer.txt 2>/dev/null
if diff -u test04_output.txt answer.txt > diff_output.txt 2>&1; then
    echo "${GREEN}Test04 PASSED${NOCOL}"
else
    echo "${RED}Test04 FAILED${NOCOL}"
    cat diff_output.txt
fi
rm test04_output.txt

# Test05: MILK TEA with no toppings, size LARGE
echo "Test05: Testing MILK TEA with no toppings, size LARGE"
echo "0\n0\n0\nL\n" | ./bubble_tea > test05_output.txt 2>/dev/null
echo "0\n0\n0\nL\n" | ./answer > answer.txt 2>/dev/null
if diff -u test05_output.txt answer.txt > diff_output.txt 2>&1; then
    echo "${GREEN}Test05 PASSED${NOCOL}"
else
    echo "${RED}Test05 FAILED${NOCOL}"
    cat diff_output.txt
fi
rm test05_output.txt

# Clean up
rm answer.txt diff_output.txt
