#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: no of command line args
 * @argv: pointer to tthe command args
 * Return: 0 if  no error
 */
int main(int argc, char *argv[])
{
	int no_of_bytes, i = 0;
	unsigned char *addr;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	no_of_bytes = atoi(argv[1]);
	if (no_of_bytes <= 0)
	{
		printf("Error\n");
		return (2);
	}
	addr = (unsigned char *)main;
	while (i < no_of_bytes)
	{
		printf("%02x ", addr[i]);
		i++;
	}
	printf("\n");
	return (0);
