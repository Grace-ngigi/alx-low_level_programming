#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins
 * to make change for an amount of money
 * @argc: arg count
 * @argv: args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int n, change = 0;

	if (argc == 2)
	{
		n = atoi(argv[1]);
		if (n > 0)
		{
			for (; n >= 25; change++)
				n -= 25;
			for (; n >= 10; change++)
				n -= 10;
			for (; n >= 5; change++)
				n -= 5;
			for (; n >= 2; change++)
				n -= 2;
			for (; n >= 1; change++)
				n -= 1;
		}
		printf("%d\n", change);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
