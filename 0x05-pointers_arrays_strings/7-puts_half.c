#include "main.h"
/**
 * puts_half - prints half of a string
 * @str:arg containing the string
 * Return: 0
 */
void puts_half(char *str)
{
	int length, midpoint, i, j;
	char secondHalf[100];

	length = strlen(str);
	if (length % 2 != 0)
		midpoint = (length - 1) / 2;
	else
		midpoint = length / 2;

	for (i = midpoint, j = 0; i <= length; i++, j++)
		secondHalf[j] = str[i];
	_putchar(secondHalf);
}
