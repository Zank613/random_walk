# Random Walk Program

## Introduction
The Random Walk Program is an intriguing project built in C99, showcasing the implementation and understanding of fundamental programming concepts through a simple, visual algorithm. Developed as a hands-on exercise, this program brings to life the concepts of multi-dimensional arrays, random number generation, and control flow mechanisms like loops and conditionals.

## Program Overview
At its core, the Random Walk Program creates a visual representation of a random walk within a 10x10 grid. Starting from a random position, the program places alphabetical characters ('A' to 'Z') to mark the path taken by the walk. Each step moves to an adjacent, unvisited cell in a random direction (up, down, left, or right), illustrating a fascinating pattern of randomness.

## Key Features
- **Dynamic Grid Initialization**: Prepares a 10x10 grid, filling it with dots (`.`) to represent unvisited cells.
- **Random Start**: Chooses a random starting location within the grid to begin the walk.
- **Directional Movement**: Randomly selects a viable direction to move in, avoiding cells that have already been visited.
- **Character Placement**: Marks each visited cell with sequential letters from 'A' to 'Z', visualizing the path of the walk.
- **Boundary Checking**: Ensures movements are contained within the grid and avoids revisiting cells.
- **Path Termination**: Stops the walk if no unvisited adjacent cells are available.

## Compilation and Execution
This program is written in C99 and can be compiled with any standard C compiler, such as GCC. Here's how to compile and run the program:

### Compiling
```bash
gcc -std=c99 -o random_walk random_walk.c
