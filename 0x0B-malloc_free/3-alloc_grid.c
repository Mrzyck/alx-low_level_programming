#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **tek;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	tek = malloc(sizeof(int *) * height);

	if (tek == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		tek[a] = malloc(sizeof(int) * width);

		if (tek[a] == NULL)
		{
			for (; a >= 0; a--)
				free(tek[a]);

			free(tek);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			tek[a][b] = 0;
	}

	return (tek);
}
