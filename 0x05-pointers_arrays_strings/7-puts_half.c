#include "main.h"
/**
 * puts_half - prints half of a string
 * @str:arg containing the string
 * Return: 0
 */
void puts_half(char *str)
{
	int length, midpoint, i;

	length = 0;

	for (i = 0; str[i] != '\0'; i++)
		length++;
	midpoint = length / 2;
	
	if((length % 2) == 1)
		midpoint = ((length + 1) / 2);
	for (i = midpoint; str[i] != '\0'; i++,)
		_putchar(str[i]);
	_putchar(10);
}
