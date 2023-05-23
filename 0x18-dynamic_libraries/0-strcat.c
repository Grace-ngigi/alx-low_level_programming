#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: contains the destination where string will be appended to
 * @src: containes the string to append
 * Return: pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	/* get length of dest and store it in i */
	for (i = 0; dest[i] != '\0'; i++)
		continue;

	/* concatenate src at the end of dest */
	for (j = 0; src[j] != '\0'; j++, i++)
		dest[i] = src[j];
	dest[i] = '\0';
	return (dest);
}
