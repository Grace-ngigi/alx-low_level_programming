#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: the string evaluated
 * Return: the length of the string as an int
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		continue;
	return (i);
}
