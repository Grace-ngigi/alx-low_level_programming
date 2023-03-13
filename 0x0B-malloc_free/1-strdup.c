#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns  pointer to a newly allocated space in memory
 * which containe a copy of the string given as param
 * @str: pointer to the given string
 * Return: pointer to duplicated string or NULL if failure
 */
char *_strdup(char *str)
{
	char *p;
	int i, j;

	/* check if str = null */
	if (str == 0)
		return (NULL);
	/* get length of str nd allocate memory */
	for (i = 0; str[i] != '\0'; i++)
		p = malloc(sizeof(char) * (i + 1));
	/* check for null pointer */
	if (p == NULL)
		return (NULL);
	/* make a copy of str in p */
	for (j = 0; str[j] != '\0'; j++)
		p[j] = str[j];
	return (p);
}
