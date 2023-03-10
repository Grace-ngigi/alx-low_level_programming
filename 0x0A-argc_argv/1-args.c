#include <stdio.h>
/**
 * main - prints the number of argumnets passes into it
 * @argc: args count
 * @argv: args
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
