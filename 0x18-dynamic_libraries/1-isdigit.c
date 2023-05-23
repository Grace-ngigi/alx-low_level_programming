#include "main.h"
/**
 * _isdigit - checks for a digit
 * @c: Character neing checked
 * Return: 1 if success and return 0 if failure
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
