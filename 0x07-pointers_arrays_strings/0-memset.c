#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: pointer to destination
 * @b: value to be filled
 * @n: number of bytes to be filled
 * Return: pointer to destination
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (i < n)
		*(s + i) = b;
	return (s);
}
