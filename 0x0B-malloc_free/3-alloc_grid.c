#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid for 2 dim array
 * @width: width
 * @height: height
 * Return: 2 dimensional array
 */

int **alloc_grid(int width, int height)
{
	int **c;
	int m, q;

	if (width <= 0 || height <= 0)
	return (NULL);

	c = malloc(sizeof(int *) * height);

	if (c == NULL)
	return (NULL);

	for (m = 0; m < height; m++)
	{
		c[m] = malloc(sizeof(int) * width);

		if (c[m] == NULL)
		{
			for (; m >= 0; m--)
			free(c[m]);

			free(c);
			return (NULL);
		}
	}
	for (m = 0; m < height; m++)
	{
		for (q = 0; q < width; q++)
		c[m][q] = 0;
	}
	return (c);
}
