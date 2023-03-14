#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all args of the program
 * @ac: args count
 * @av: args
 * Return: pointer to new string of Null if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, l;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);
	k = l = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			l++;
	}
	l += ac;
	ptr = malloc(sizeof(char) * (l + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			ptr[k] = av[i][j];
			k++;
		}
		if (ptr[k] == '\0')
			ptr[k++] = '\n';
	}
	return (ptr);
}

