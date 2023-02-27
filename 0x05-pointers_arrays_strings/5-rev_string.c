#include "main.h"
/**
 * rev_string - reverses a string
 * @s: arg passed to contain string being reversed
 * Return: 0
 *
 */
void rev_string(char *s)
{
	char reverse = s[0];
	int i = 0, j;

	while (s[i] != '\0')
		i++;
	for (j = 0; j < i; j++)
	{
		i--;
		reverse = s[j];
		s[j] = s[i];
		s[i] = reverse;
	}
}
