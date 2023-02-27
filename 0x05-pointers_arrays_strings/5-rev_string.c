#include "main.h"
/**
 * rev_string - reverses a string
 * @s: arg passed to contain string being reversed
 * Return: 0
 *
 */
void rev_string(char *s)
{
	int i, j, len;

	for (i = 0; s[i] != '\0'; i++)
		continue;
	len = i;

	for (j = len - 1; j >= 0; j--)
		_putchar(s[j]);
}
