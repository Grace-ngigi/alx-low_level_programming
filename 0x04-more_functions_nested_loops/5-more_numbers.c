#include "main.h"

/**
 * more_numbers - prints 10 times numbers from 0 to 14
 * Return: 0
 */

void more_numbers(void)
{
	char x = 0, y;

	while (x <= 9)
	{
		y = 0;
		while (y <= 14)
		{
			if (y > 9)
			_putchar('1');
			_putchar((y % 10) + '0');
			y++;
		}
		_putchar('\n');
		x++;
	}
	_putchar('\n');
}

