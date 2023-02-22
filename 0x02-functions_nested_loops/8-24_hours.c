#include "main.h"
/**
 * jack_bauer - prints envery minute of the day
 * Return: 0
 */
void jack_bauer(void)
{
	int x = 0, y;

	while (x < 24)
	{
		y = 0;
		while (y < 60)
		{
			_putchar((x % 10) + '0');
			_putchar((x / 10) + '0');
			_putchar(':');
			_putchar((y % 10) + '0');
			_putchar((y / 10) + '0');
			x++;
		}
		y++;
	}
	return (0);
}
