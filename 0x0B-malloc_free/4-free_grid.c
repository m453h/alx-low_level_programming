#include "main.h"
#include <stdlib.h>


/**
 * free_grid - frees memory from a created two
 * dimensional array
 *
 * @grid: the address of the two dimensional array
 * @height: the height of the arry
 *
 * Return: (void)
 */
void free_grid(int **grid, int height)
{
	while (height > 0)
	{
		height--;
		free(grid[height]);
	}

	free(grid);
}
