#include "main.h"
/**
 * flip_bits - return the number of bits needed to flip  numbers
 * @n: given number
 * @m: given nubmer of times
 * Return: number of bis needed to flip numbers"
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int result, j = 0;
	int  i;

	for (i = 63; i >= 0; i--)
	{
		result = (n ^ m) >> i;
		if (result & 1)
			j++;
	}
	return (j);
}
