#include <stdio.h>
/**
 * main - prints all possible combinations of two two -digit numbers
 * Return: 0
 */
int main(void)
{
	int x, y;

	for (x = 0; x < 98; x++)
	{
		for (y = x + 1; y < 99; y++)
		{
			putchar((x % 10) + '0');
			putchar((y % 10) + '0');
			putchar(' ');
			putchar((x % 10) + '0');
			putchar((y % 10) + '0');
			putchar(',');
		}
	}
	putchar('\n');
	return (0);
}


