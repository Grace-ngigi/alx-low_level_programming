#include <stdio.h>
/**
 * main - print combinations of single digit numbers
 * return: 0
 */
int main(void)
{
	int d;

	for (d = 0; d <= 9; d++)
		putchar(d + 'o');
		if (d < 9)
			putchar(',');
	putchar(' ');
putchar('\n');
return (0);
}
