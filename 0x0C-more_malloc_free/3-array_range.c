#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: min value
 * @max: max value
 * Return: pointer to newly created array
 */
int *array_range(int min, int max)
{
	int i, len;
	int *ptr;

	if (min > max)
		return (NULL);
	len = max - min + 1;

	ptr = malloc(sizeof(int) * len);

	if (ptr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		ptr[i] = min++;
	return (ptr);
}
