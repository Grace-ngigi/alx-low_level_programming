#include <stdio.h>
/**
 * main - print aphabetic charactersboth in lower and upper case
 *
 * Return: 0
 *
 */
int main(void)
{
	char l;
	char u;

	for (l = 'a'; l <= 'z'; l++)
		putchar(l);
			for (u = 'A'; u <= 'Z'; u++)
				putchar(u);
			putchar('\n');
			return (0);
}
