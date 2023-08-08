#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: list of types of args
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	const char *frmt = format;
	int n;
	char c;
	float f;
	char *s, *separator = "";
	
	va_start(ap, format);
	
	if (frmt)
	{
		while (*frmt)
		{
			switch (*frmt)
			{
				case 'c':
					c = va_arg(ap, int);
					printf("%s%c", separator, c);
					break;
				case 'i':
					n = va_arg(ap, int);
					printf("%s%d", separator, n);
					break;
				case 'f':
					f = va_arg(ap, double);
					printf("%s%f", separator, f);
					break;
				case 's':
					s = va_arg(ap, char *);
					if (s == NULL)
						s = "(nil)";
					printf("%s%s", separator, s);
					break;
				default:
					break;
		}
		separator = ", ";
		frmt++;
		}
	}
	va_end(ap);
	printf("\n");
}
