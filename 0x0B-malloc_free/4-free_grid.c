#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees 2-d array
 * @grid: pointer to pointer variable
 * @height: int variable
 * Return: 0 always
 */

void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}

