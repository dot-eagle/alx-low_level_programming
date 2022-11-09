#include "main.h"

/**
 * free_grid - frees a 2d grid previously created by alloc_grid function
 * @grid: pointer to 2 dim. array to be freed
 * @height: input height (size) of array
 *
 * Return: free grid/memory
 */

void free_grid(int **grid, int height)
{
	int y;

	if (grid == NULL || height <= 0)
		return;
	y = 0;
	while (y < height)
	{
		free(grid[(height - 1) - y]);
		y++;
	}
	free(grid);
}
