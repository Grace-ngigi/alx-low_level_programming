#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a param
 * @array: array to iterate
 * @size: size of the array
 * @action:function pointer
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
