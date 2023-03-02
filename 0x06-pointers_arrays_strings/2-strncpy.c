#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: where string will be copied to
 * @src: string being copied
 * @n: number of character to be copied
 * Return: pointer to the dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
	size_t i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
