#include <stdio.h>
#include<stdlib.h>
/**
 * main - adds positive numbers
 * @argc: args count
 * @argv: args
 * Return: 0 if sucess 1 if failure
 */
int main(int argc, char *argv[])
{
	unsigned int i, j, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if  (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
