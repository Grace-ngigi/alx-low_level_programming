#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a sD array of integers
 * @width: values for width
 * @height: values for height
 * Return: pointer to a 2D array
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	/* check if width and height = 0 */
	if (width <= 0 || height <= 0)
		return (NULL);
	/* Allocate memory for 1D array */
	ptr = malloc(sizeof(int *) * height);

	/* Check for null pointer */
	if (ptr == NULL)
		return (NULL);
	/* Allocte momory fro second array */
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
		{
		for (i = i - 1; i >= 0; i--)
			free(ptr[i]);
		free(ptr);
		return (NULL);
		}
	}
	/* Initialize to 0 */
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	return (ptr);
}
