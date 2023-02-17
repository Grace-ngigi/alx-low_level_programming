#include <stdio.h>
/**
 * main - print hexadecimal in lowercase
 * Return: 0
 */
int main(void)
{
	int d;
	char l;

	for (d = 0; d <= 9; d++)
		putchar((d % 10) + '0');
	for (l = 'a'; l <= 'f'; l++)
		putchar(l);
	putchar('\n');
	return (0);
}
