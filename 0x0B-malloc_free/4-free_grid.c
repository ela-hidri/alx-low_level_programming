#include <stdlib.h>
#include <stddef.h>
/**
 * free_grid - frees a 2 dimensional grid
 * @grid:  grid previously created by  alloc_grid
 * @height: height of matrix
 *
 * Return: nothing
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
