#include <stdlib.h>
#include "main.h"
/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements
 * @size: size of the array
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, size * nmemb);
	return (ptr);
}
/**
 * _memset - fills memory with a constant byte
 * @s: pointer to destination
 * @b: value to be filled
 * @n: number of bytes to be filled
 * Return: pointer to destination
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
