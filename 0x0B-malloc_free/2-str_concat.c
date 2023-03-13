#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: one of the strings
 * @s2: the other string to be joined together
 * Return: pointer to newly allocated memory null on failure
 */
char *str_concat(char *s1, char s2)
{
	int i, j;
	int *p;

	/* If null treat as empty strings */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* get lengths of both s1 and s2 */

	for (i = 0; s1[i] != '\0'; i++)
		continue;
	for (j = 0; s2[j] != '\0'; j++)
		continue;
	/* allocate memory */
	p = malloc(sizeof(char) * (i + j + 1);
	/* check for numm pointer */
	if (p == NULL)
	return (NULL);

	/* append s1 to p */
	i = j = 0;

	while (s1[i] != '\0')
	{
	p[i] = s1[i];
	i++;
	}
	/* append s2 to end of s1 in p */
	while (s2[j] != '\0')
	{
	p[i] = s2[j];
	i++, j++;
	}
	p[i] = '\0';
	return (p);
}
