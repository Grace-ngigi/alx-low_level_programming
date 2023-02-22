#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets 10 times in lowercase
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char l;


	while (i <= 9)
	{
	l = 'a';
		while (l <= 'z')
		{
		_putchar(l);
		l++;
		}
	_putchar('\n');
	i++;
	}
}

