#include "main.h"
/**
 * _pow_recursion - return thre value of x rasied to the power of y
 * @x: given variable
 * @y: the other variable
 * Return: value of x raised to power of y
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
