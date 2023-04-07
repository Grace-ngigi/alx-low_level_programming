#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string containing chars
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, num = 0;

	if (b)
	{
		for (i = 0; b[i]; i++)
		{
			if (b[i] > '1' || b[i] < '0')
				return (0);
		num = 2 * num + (b[i] - '0');
		}
		return (num);
	}
	return (0);
}
