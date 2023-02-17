#include <stidio.h>
/**
 * main - print lowercase alphabetic letters except e and q
 *
 * Return: 0
 *
 */
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		if (l == 'q' || l == 'e')
			continue;
		putchar(l);
	}
	putchar('\n');
	return (0);
}

