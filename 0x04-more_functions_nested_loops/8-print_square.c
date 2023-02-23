#include "main.h"

/**
 * print_square - prints a square
 * @size: variable
 * Return: 0
 */

void print_square(int size)
{
	int x, y;

	if (size <= 0)
		_putchar('\n');
	x = 0;
	while (x < size)
	{
		y = 0;
		while (y < size)
		{
			_putchar('#');
			y++;
		}
		_putchar('\n');
		x++;
	}
}
