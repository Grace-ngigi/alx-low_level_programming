#include<stdio.h>
/**
 * main - prints the size of various types of the computer it is working on
 *
 * Return: 0 (Always Success)
 */
int main(void)
{
	char c;
	int i;
	float f;

	printf("Size of a char: %lu.\n", sizeof(c));
	printf("Size of an int: %lu.\n", sizeof(i));
	printf("Size of a float: %lu.\n", sizeof(f));
	return (0);
}
