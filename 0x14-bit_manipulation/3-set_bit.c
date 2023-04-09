#include "main.h"
/**
 * set_bit - sets the value of  bit to 1 at a given index
 * @n: pointer to a given number
 * @index: given index
 * Return: i if it works
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (1 << index) | *n;
	return (1);
}
