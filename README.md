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
make project3

##Usage
./
.
