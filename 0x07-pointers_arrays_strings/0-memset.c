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
	unsigned char *t = s;

	while (n--)
		*t++ = (unsigned char)b;
	return (t);
}
