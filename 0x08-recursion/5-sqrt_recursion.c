#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number whose square root is to be determined
 * Return: natural square root of a number
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (-1);
	return (check_for_square(1, n));
}

/**
 * check_for_square - checks if variable square is a perfect sqaure
 * @num: variable
 * @square: variable being checked
 * Return: perfect sqaure
 */
int check_for_square(int num, int square)
{
	if (num * num == square)
		return (num);
	if (num * num > square)
		return (-1);
	return (check_for_square(num + 1, square));
}
