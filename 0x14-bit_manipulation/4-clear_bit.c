#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 a a given index
 * @n: pointer to a given number
 * @index: given index
 * Return: 1 if it works otherwise -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1 << index) & *n);
	return (1);
}

