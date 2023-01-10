#include "main.h"
#include <stdlib.h>


/**
 * alloc_grid - creates a two dimensional array initialized to 0
 *
 * @width: the number of columns of the array
 * @height: the number of rows of the array
 *
 * Return: - (NULL) if @width or @height is less than 1 else,
 *         - pointer to the created array
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (i = 0 ; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);

		if (grid[i] == NULL)
		{
			return (NULL);
		}
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
