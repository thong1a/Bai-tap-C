# Multi-structure C exercises
This repository offers several C exercises that demonstrate different ways to organize code, from a single-file CLI to static and shared library layouts. Each folder under `exercises/` contains starter code and a short README.

## Exercises
- `01-basic-cli`: Minimal one-source project. Parse integer CLI arguments, ignore invalid values, and report count, sum, and average.
- `02-static-library`: Split code into `include/`, `src/`, and `app/`, building a small stats library consumed by an example program.
- `03-shared-library`: Shared library example with reusable text helpers and a demonstration executable.

## How to use these exercises
The build scripts were intentionally removed so you can practice creating your own Makefile or CMake setup. Each exercise README describes the expected outcome, and the accompanying `SOLUTION.txt` files show reference compile and run commands.
