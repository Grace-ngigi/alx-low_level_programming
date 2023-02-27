#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string to be cnverted
 * Return: convert integer
 */
int _atoi(char *s)
{
	int ind1, ind2, sign = 1;
	unsigned int res;
	char str;

	ind1 = 0;
	res = 0;

	while (s[ind1] != '\0')
	{
		str = s[ind1];
		if (str == '-')
			sign *= -1;
		if (str >= '0' && str <= '9')
		{
			ind2 = ind1;
			while (s[ind2] > 47 && s[ind2] < 58)
			{
				res = (res * 10) + s[ind2] - '0';
				ind2++;
			}
			break;
		}
		ind1++;
	}
	if (sign < 0)
		res *= sign;
	return (res);
}
