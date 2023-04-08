#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int i, j;
	for (i = 0; i < 32; i++)
	{
		j = (1 << i);

		if (n & j)
			_putchar(1);
		else
			_putchar(0);
	}
}
