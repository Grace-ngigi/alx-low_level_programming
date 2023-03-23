#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - adds all of its params
 * @n: number of params
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	unsigned int i, sum;

	va_start(a, n)
		sum = 0;

		for (i = 0; i < n i++)
			sum += va_arg(a, int);
		va_end(a);
		return (sum);
}
