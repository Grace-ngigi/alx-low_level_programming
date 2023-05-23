#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: contaisn destination of the string to be appended to
 * @src: contains the string to append
 * @n: contains number of characters to append
 * Return: pointer to the appended string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	/*Find the end of the dest and store it in i */
	for (i = 0; dest[i] != '\0'; i++)
		continue;
	/* concatenate src atthe end of dest while j < n */
	for (j = 0; j < n && src[j] != '\0'; i++, j++)
		dest[i] = src[j];
	dest[i] = '\0';
	return (dest);
}
