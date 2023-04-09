#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int i, j = 0;
	unsigned long int k;

	for (i = 32; i >= 0; i--)
	{
		k = (n >> i);

		if (k & 1)
		{
			_putchar('1');
			j++;
		}
		else if (j)
			_putchar('0');
	}
	if (!j)
		_putchar('0');
}
