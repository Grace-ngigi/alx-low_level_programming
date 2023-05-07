#include "main.h"
/**
 * print_times_table - prints an n times table
 * @n: number of times
 * Return: nothing
 */
void print_times_table(int n)
{
	int x, y, z;

	if (n > 0 && n < 15)
	{
		for (y = 0; y <= n + 1; y++)
		{
			for (x = 0; x <= n + 1; x++)
			{
				z = y * x;
				if (x == n + 1)
				{
					_putchar('\n');
					break;
				}
				if (z >= 100)
				{
					_putchar((z / 100) + '0');
					_putchar(((z / 10) % 10) + '0'); 
					_putchar((z % 10) + '0');
					if (x < n)
						_putchar(',');
				       	_putchar(' ');
				}
				else if (z >= 10)
				{
					_putchar((z / 10) + '0');
					_putchar((z % 10) + '0');
					if (x < n)
						_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar(z + '0');
					if (x < n)
						_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
			}
			if (y == n)
				break;
		}
	}
}
