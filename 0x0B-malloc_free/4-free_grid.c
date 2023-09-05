#include <stdlib.h>
/**
 * free_grid - free 2d array
 * @grid: pointer to 2d array
 * @height: number of row
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
