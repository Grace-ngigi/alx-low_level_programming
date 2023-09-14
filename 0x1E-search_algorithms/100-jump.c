#include "search_algos.h"
#include <math.h>
/**
 * min - finds the min value
 * @a: int
 * @b: int
 * Return: the min value
 */
size_t min(size_t a, size_t b)
{
	if (b > a)
		return (a);
	else
		return (b);
}

/**
 * jump_search - algorithm to find the index of a value in a sorted array
 * @array: Pointer to the sorted array.
 * @size: Size of the array.
 * @value: Value to search for in the array.
 *
 * Return: Index of the value if found, or -1 if not found.
 */

int jump_search(int *array, size_t size,  int value)
{
	size_t i, step, prev;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	for (i = prev = 0; prev < size && array[prev] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		i = prev;
		prev += step;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", i, prev);
	while (array[min(step, size) - 1] < value)
	{
		prev = step;
		step += sqrt(size);
		if (prev >= size)
			return (-1);
	}
	/* Linear search */
	while (array[prev] < value)
	{
		prev++;
		/* Element not found*/
		if (prev == min(step, size))
			return (-1);
	}
	/* If element is found*/
	if (array[prev] == value)
		return (prev);
	return (-1);
}
