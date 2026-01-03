# Exercise 3: Shared library without prepared build files

This folder contains source and header files for a small shared library (`textutils`) and a demonstration program. You will supply the build tooling (Makefile, CMake project, or manual commands) to compile the shared object and link the example app.

## Build & run
Create your own build steps to generate a shared library and an executable that links against it. `SOLUTION.txt` includes one way to do this with plain `gcc` commands.

## Learning goals
- Produce a shared library (`.so`/`.dll`) and link a consumer program.
- Manage include paths and linker flags yourself.
- Gain familiarity with build options needed for position-independent code.
