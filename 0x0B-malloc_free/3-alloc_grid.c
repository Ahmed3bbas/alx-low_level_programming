#include <stdlib.h>

/**
 * alloc_grid - used to create 2d array
 * @width: Number of columns
 * @height: Number of rows
 * Return: pointer to 2d array or NULL for failure
*/
int **alloc_grid(int width, int height)
{
	int **grid, i, j, stopflag = 0;

	if (width == 0 || height == 0)
		return (NULL);

	grid = (int **)malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);

		if (grid[i] == NULL)
		{
			stopflag = i + 1;
			break;
		}
	}

	if (stopflag)
	{
		for (i = 0; i < stopflag - 1; i++)
		{
			free(grid[i]);
		}
		free(grid);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
