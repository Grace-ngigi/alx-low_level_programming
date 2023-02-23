#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: variable
 * Return: 0
 */

void print_triangle(int size)
{
	int x, y, z;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		x = 1;
		while (x <= size)
		{
			y = size - x;
			while (y >= 1)
			{
				_putchar(' ');
				y--;
			}
			z = 1;
			while (z <= x)
			{
				_putchar('#');
				z++;
			}
			_putchar('\n');
			x++;
		}
	}
}

