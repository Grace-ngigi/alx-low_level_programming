#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: pointer to the string
 * @c: the character to be located
 * Return: pointer to first occurrence of character stored in c
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	i = 0;
	while (*(s + i) != '\0')
		if (*(s + i) == c)
			return (s + i);
		i++;

		return ('\0');
}
