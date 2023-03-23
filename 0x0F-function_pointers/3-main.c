#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - performs many operations
 * @argc: args count
 * @argv: pointer to command line args
 * Return: int
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	char opr;

	/* Check the no. of args */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	/* assignment */
	num1 = atoi(argv[1]);
	opr = argv[2][0];
	num2 = atoi(argv[3]);

	/* check operators */
	if (opr != '+' && opr != '-' && opr != '/' && opr != '*' && opr != '%')
	{
		printf("Error\n");
		exit(99);
	}

	/* check if user divides by 0 */
	if ((opr == '/' && num2 == 0) || (opr == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(argv[2])(num1, num2));
	return (0);
}
