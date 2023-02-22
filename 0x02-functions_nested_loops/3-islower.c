#include"main.h"
#include<stdlib.h>
/**
 * _islower - checks for lowercase character
 * Return: I for success, 0 for failure
 */
int _islower(int c)
{
	if (islower(c))
		return 1;
	else
		return 0;
}
