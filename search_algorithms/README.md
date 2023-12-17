# C - Search Algorithms

This repository contains the tasks for the "C - Search Algorithms" project at [Holberton School](https://www.holbertonschool.com/). The aim of this project is to understand and implement search algorithms in the C programming language.

## Learning Objectives

- What is a search algorithm.
- What is a linear search.
- What is a binary search.
- What is the best search algorithm to use depending on your needs.

## Requirements

- All files will be compiled on Ubuntu 20.04 LTS using `gcc` with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- All files should end with a new line.
- Code should use the Betty style for checking code formatting.
- No more than 5 functions per file.
- The prototypes of all functions should be included in the header file `search_algos.h`.
- All header files should be include guarded.

## Mandatory Tasks

- **0-linear.c**: Function that searches for a value in an array of integers using the Linear search algorithm.
- **1-binary.c**: Function that searches for a value in a sorted array of integers using the Binary search algorithm.
- **2-O**: Time complexity of a linear search in an array of size n.
- **3-O**: Space complexity of an iterative linear search algorithm in an array of size n.
- **4-O**: Time complexity of a binary search in an array of size n.
- **5-O**: Space complexity of a binary search in an array of size n.
- **6-O**: Space complexity of a function that creates a 2D array.

## Compilation & Testing

To compile the code, run the following command:
```sh
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o program_name
