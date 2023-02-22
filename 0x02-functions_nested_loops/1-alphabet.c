#include "main.h"
/**
 * main - pritns the alphabet in lowercase
 * Return: 0
 */
int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
		_putchar(l);
	_putchar('\n');
	return (0);
}
