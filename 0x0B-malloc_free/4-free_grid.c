#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free the grid
 * @grid: grid of memories
 * @height: int
 * Return: void
 */

void free_grid(int **grid, int height)
{
  int i;

  if (height <= 0)
    return;

  if (grid == NULL)
    return;

  for (i = 0; i < height; i++)
  {
    free(grid[i]);
  }

  free(grid);
}
