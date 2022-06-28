#include <stdlib.h>
#include "main.h"

/**
* **alloc_grid - returns a pointer to a 2 dim array
* @width: width of array
* @height: length of array
*
* Return: grid or NULL
*/

int **alloc_grid(int width, int height)
{
	int i, j, init = 0;
	int **grid;

	if (width < 1 || height < 1)
		return (NULL);

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	for (i = 0; i < height; i++)
		grid[i] = malloc(sizeof(int) * width);

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			grid[i][j] = init;
	}

	return (grid);
}
