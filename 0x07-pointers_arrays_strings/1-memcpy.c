#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: pointer to destination
 * @src: pointer to source
 * @n: number of bytes to ne copied
 * Return: pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		continue;
	for (j = 0; j < n && src[j] != '\0'; j++, i++)
		*dest++ = src[j];
	return (dest);
}
