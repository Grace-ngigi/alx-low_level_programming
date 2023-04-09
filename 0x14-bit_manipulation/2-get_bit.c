#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: given number
 * @index: given index
 * Retrun: int value of a given bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i = 0;

	if (index > 63)
		return (-1);

	i = (n >> index) & 1;

	return (i);
}
