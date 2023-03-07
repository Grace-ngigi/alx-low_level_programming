#include "main.h"
#include <stdio.h"

/**
 * print_diagsums - prints the sum of two diagonals
 * of a square matrix of integers
 * @a: pointer to an integer
 * @size: size of the matrix
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
			sum1 += a[i];
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
			sum2 += a[i];
	}
	prinf("%d, %d\n", sum1, sum2);
}