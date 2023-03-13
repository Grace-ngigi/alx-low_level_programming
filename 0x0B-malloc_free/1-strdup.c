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

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		p = malloc(sizeof(char) * (i + 1));
	if (p == NULL)
		return (NULL);
	for (j = 0; str[j]; j++)
		p[j] = str[j];
	return (p);
}
