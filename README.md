# Random Walk Program

## Introduction
The Random Walk Program is a simple yet fascinating project developed in C99. It was created as a learning exercise to understand and implement core programming concepts such as multi-dimensional arrays, random number generation, control flow with loops and conditionals, and the execution of a simple algorithm. This program serves as an educational tool for those interested in exploring the basics of programming in C and algorithmic thinking.

## Features
- **Multi-Dimensional Arrays**: Demonstrates the use of arrays within arrays to simulate a grid.
- **Random Number Generation**: Utilizes C's random number generation capabilities to dictate movement within the grid.
- **Control Flow**: Implements loops and conditional statements to navigate through the grid and make decisions.
- **Simple Algorithm Implementation**: Follows a straightforward algorithm to simulate the random walk process.

## How It Works
The Random Walk Program simulates a random walk on a grid. A point starts at the center (or a random starting point) of the grid and moves in a random direction (up, down, left, or right) at each step. The program tracks the path taken and displays the grid with the path marked, showcasing how random movement creates patterns over time.

## Getting Started

### Prerequisites
- A C compiler that supports C99 (GCC recommended)
- Basic knowledge of compiling C programs from the command line

### Compiling the Program
To compile the Random Walk Program, navigate to the directory containing the program files and use the following command:

```bash
gcc -std=c99 -o random_walk random_walk.c
