#include <stdio.h>
#include <stdlib.h>

char ** grid() {
    char ** grid = malloc(4 * sizeof(*grid));
    grid[0] = malloc(4 * sizeof(char));
    grid[1] = malloc(4 * sizeof(char));
    grid[2] = malloc(4 * sizeof(char));
	grid[3] = NULL;
    grid[0][0] = ' ';
    grid[0][1] = ' ';
    grid[0][2] = ' ';
    grid[1][0] = ' ';
    grid[1][1] = ' ';
    grid[1][2] = ' ';
    grid[2][0] = ' ';
    grid[2][1] = ' ';
    grid[2][2] = ' ';
    return grid;
}

void interface(char ** grid) {
    printf("  %c  |  %c  |  %c  \n", grid[0][0], grid[0][1], grid[0][2]);
    printf("-----------------\n");
    printf("  %c  |  %c  |  %c  \n", grid[1][0], grid[1][1], grid[1][2]);
    printf("-----------------\n");
    printf("  %c  |  %c  |  %c  \n", grid[2][0], grid[2][1], grid[2][2]);
}