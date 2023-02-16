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
	long int l;
	long long int m;

	printf("Size of a char: %lu byte(s)\n", sizeof(c));
	printf("Size of an int: %lu byte(s)\n", sizeof(i));
	printf("size of a long int: %lu byte(s)\n", sizeof(l));
	printf("size of a long long int: %lu byte(s)\n", sizeof(m));
	printf("Size of a float: %lu byte(s)\n", sizeof(f));
	return (0);
}
