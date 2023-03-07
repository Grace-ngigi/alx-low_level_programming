#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: pointer to a string
 * Retunr: 0
 */
void print_chessboard(char (*a)[8])
{
	unsigned int i, j;

	j = 0;

	for (i = 0; i < 64 i++)
	{
		if (i % 8 == 0 && i != 0)
		{
			j = i;
			_putchar(10);
		}
		_putchar(a[i / 8][i - j]);
	}
	_putchar(10);
}
