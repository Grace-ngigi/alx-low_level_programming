#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: the other string
 * @n: number of bytes to be copied
 * Return: pointer pointing to newly allocated space for the two strings
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int s1_len, s2_len, i, j;

	i = j = 0;

	/* treat null as empty */
	if (s1 == NULL)
		return (NULL);
	if (s2 == NULL)
		return (NULL);

	/* Find string lengths */
	for (s1_len = 0; s1[s1_len] != '\0'; s1_len++)
		continue;
	for (s2_len = 0; s2[s2_len] != '\0'; s2_len++)
		continue;

	/* allocate memory conditionally */
	if (n > s2_len)
		str = malloc(sizeof(char) * (s1_len + s2_len + 1));
	else
		str = malloc(sizeof(char) * (s1_len + n + 1));
	/* check for null pointer */
	if (str == NULL)
		return (NULL);
	/* join strings conditionally */
	for (; i < s1_len; i++)
		str[i] = s1[i];
	for (; n < s2_len && i < s1_len + n; i++, j++)
		str[i] = s2[j];
	for (; n >= s2_len && i < (s1_len + s2_len); i++, j++)
		str[i] = s2[j];

	str[i] = '\0';
	return (str);
}
