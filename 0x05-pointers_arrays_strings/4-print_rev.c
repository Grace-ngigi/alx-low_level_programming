#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: The string param being reversed
 * Return: 0
 *
 */
void print_rev(char *s)
{
	int i, l, length;

	for (i = 0; s[i] != '\0'; i++)
		continue;
	length = i;

	for (l = length - 1; l >= 0; l--)
		_putchar(s[l]);
	_putchar(10);
}
