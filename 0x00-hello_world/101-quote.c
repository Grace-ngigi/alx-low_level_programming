#include<stdio.h>
#include<unistd.h>
/**
 * main - prints a sentence into stderr
 *
 * Return: 1
 */
int main(void)
{
	fput("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", stderr);
	return (1);
}
