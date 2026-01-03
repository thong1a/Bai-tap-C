# Exercise 2: Static library layout

This directory separates `include/`, `src/`, and `app/`. The goal is to build a small stats library (`libstats.a`) and link it with the sample application in `app/`.

## Build & run
Provide your own Makefile or set of shell commands to compile the library and the demo binary. See `SOLUTION.txt` for one possible sequence of commands.

## Learning goals
- Organize code into headers, implementations, and a consumer application.
- Use `ar` to create and link a static library.
- Practice designing a multi-target build script yourself.
