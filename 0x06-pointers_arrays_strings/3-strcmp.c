#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: string1
 * @s2: string2
 * Return:s1 -s2 converted to unsigned characters
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
			break;
		s1++;
		s2++;
	}
	return (*(const unsigned char *)s1 - *(const unsigned char *)s2);
}
