#include "main.h"
#include <stdio.h>

/**
 * print_array - prints the elements of an array
 * @a: given array
 * @n: given length of the array
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		if (i != n - 1)
			printf("%d, ,", a[i]);
		else
			printf("%d", a[i]);
	_putchar(10);
}
