#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string to be cnverted
 * Return: convert integer
 */
int _atoi(char *s)
{
	int x, y, sign, num;

	if (s[0] == '-')
		sign = -1;
	if (sign == -1)
		y = 1;
	else
		y = 0;
	num = 0;

	for (x = y; s[x] != '\0'; x++)
		num = num * 10 + s[x] - '0';
	if (sign == -1)
		num = -num;
	return (num);
}
