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
		while (y <= 14)
		{
			_putchar('y');
			y++;
		}
		_putchar('\n');
		x++;
	}
}

