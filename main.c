#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

#define PATH_SIZE 10
#define RANDOM_LOCATION rand() % PATH_SIZE
#define LABEL_LENGTH sizeof(labels) / sizeof(labels[0])

int main(void)
{
    char path[PATH_SIZE][PATH_SIZE];
    char labels[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
                     'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T',
                     'U', 'V', 'W', 'X', 'Y', 'Z'};

    int direction, current_row, current_column;

    srand(time(NULL));

    // Initialize the grid
    for (int i = 0; i < PATH_SIZE; i++)
        for (int j = 0; j < PATH_SIZE; j++)
            path[i][j] = '.';

    // Start at a random location
    current_row = current_column = RANDOM_LOCATION;
    path[current_row][current_column] = labels[0];

    // Perform the random walk
    for (int i = 1; i < LABEL_LENGTH && i < PATH_SIZE * PATH_SIZE; i++)
    {
        int available_directions[4] = {-1, -1, -1, -1};
        int num_available_directions = 0;

        // Check for available moves
        if (current_row > 0 && path[current_row - 1][current_column] == '.')
            available_directions[num_available_directions++] = 0; // UP
        if (current_row < PATH_SIZE - 1 && path[current_row + 1][current_column] == '.')
            available_directions[num_available_directions++] = 1; // DOWN
        if (current_column > 0 && path[current_row][current_column - 1] == '.')
            available_directions[num_available_directions++] = 2; // LEFT
        if (current_column < PATH_SIZE - 1 && path[current_row][current_column + 1] == '.')
            available_directions[num_available_directions++] = 3; // RIGHT

        // If no moves are available, break out of the loop
        if (num_available_directions == 0) {
            printf("Could not place %c, no available moves, stopping walk.\n", labels[i]);
            break;
        }

        // Choose a random available direction
        direction = available_directions[rand() % num_available_directions];

        // Move in the chosen direction
        switch (direction)
        {
            case 0: current_row--; break;
            case 1: current_row++; break;
            case 2: current_column--; break;
            case 3: current_column++; break;
        }

        // Place the letter and continue the walk
        path[current_row][current_column] = labels[i];
    }

    // Print the grid
    for (int i = 0; i < PATH_SIZE; i++) {
        for (int j = 0; j < PATH_SIZE; j++) {
            printf("%c ", path[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
