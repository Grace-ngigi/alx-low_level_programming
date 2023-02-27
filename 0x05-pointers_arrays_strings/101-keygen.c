#incude "main.h"
#include <stdio.h>
#include <math.h>

/**
 * main - generates random valid passwords
 * Return: 0
 */
int main(void)
{
	int password, total;

	srand(time(NULL));
	total = 0;
	while (total <= 2645)
	{
		password = (rand() % 128);
		total  += password;
	}
	printf("%c", 2772 - total);
	return (0);
}
