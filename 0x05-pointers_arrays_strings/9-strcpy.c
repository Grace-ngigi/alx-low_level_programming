#include "main.h"

/**
 * _strcpy - copies string from source to destination
 * @dest: variable containing destination
 * @src: variable containing source
 * Return: Pointer to destination
 */

char *_strcpy(char *dest, char *src)
{
	int x = 0, y;

	while (src[x] != '\0')
		x++;
	for (y = 0; y < x; y++)
		dest[y] = src[y];
	dest[x] = '\0';
	return (dest);
}
