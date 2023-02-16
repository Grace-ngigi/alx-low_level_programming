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

	printf("Size of a char: %lu byte(s)\n", sizeof(c));
	printf("Size of an int: %lu byte(s)\n", sizeof(i));
	printf("size of long int: %lu byte(s)\n", sizeof(long int));
	printf("size of long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", sizeof(f));
	return (0);
}
