# Attorney Record Processor

A command-line application written in C that parses structured input, stores
records in dynamically allocated linked data structures, and supports flexible
output and sorting options. Designed to demonstrate systems programming
concepts including memory management, data structures, and file I/O.

## Features
- Accepts input from a file or standard input (`-i <file>`)
- Outputs results to a file or standard output (`-o <file>`)
- Optional sequential ID assignment for records (`-l`)
- Optional alphabetical sorting of records (`-s`)
- Dynamically allocated linked list for record storage
- Robust error handling for malformed or incomplete input
- Efficient Makefile for streamlined compilation

## Technologies
- C
- Linked Lists
- Dynamic Memory Allocation (`malloc` / `free`)
- File I/O
- Command-Line Argument Parsing
- Makefile

## Build
To compile the project, run:
```bash
make processor

## Usage
Read from standard input and write to standard output:

./processor < test.txt > out.txt


Read from a file and enable sorting and ID assignment:

./processor -i test.txt -s -l


Write output to a file:

./processor -i test.txt -o results.txt
