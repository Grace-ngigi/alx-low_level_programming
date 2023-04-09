#include "main.h"
/**
 * get_endianness - checks endianness
 * Return: 0 if big endian , 1 for little endian
 */
int get_endianness(void)
{
	int n = 1;

	char *ptr = (char *) &n;

	return (*ptr);
}
