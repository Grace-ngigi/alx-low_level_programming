#include <stdarg.h>
#include <stdio.h>
#include "variadic_fucntions.h"
/**
 * print_all - prints anything
 * @format: list of types of args
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	unsigned int i;
	char *str;
	char *separator;
	va_list argsList;

	va_start(argsList, format);
	separator = "";

	i  = 0;
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(argsList, int));
				break;
			case 'i':
                                printf("%s%d", separator, va_arg(argsList, int));
                                break;
			case 'f':
                                printf("%s%f", separator, va_arg(argsList, double));
                                break;
			case 's':
				str = va_arg(argsList, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", separator, str);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(argsList);
}
