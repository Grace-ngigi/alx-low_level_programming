#include "main.h"
/**
 * print_line - draws a straight  line in the termina
 * @c: Variable
 * Return: 0
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
