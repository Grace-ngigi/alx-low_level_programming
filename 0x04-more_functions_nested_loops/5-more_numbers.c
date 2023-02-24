#include "main.h"

/**
 * more_numbers - prints 10 times numbers from 0 to 14
 * Return: 0
 */

void more_numbers(void)
{
	char x = 1, y;

	while (x <= 10)
	{
		y = 0;
		while (y <= 14)
		{
			if (y >= 10)
			{
				_putchar('1');
			}
			_putchar((y % 10) + '0');
			y++;
		}
		_putchar('\n');
		x++;
	}
}

