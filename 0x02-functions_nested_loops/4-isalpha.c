#include "main.h"
/**
 * _isalpha - checks for both upper and lower case characters
 * @l: Character being checked
 * Return: 1 for success and 0 for failure
 */
int _isalpha(int l)
{
	if ((l >= 'a' && l <= 'z') || (l <= 'A' && l >= 'Z'))
		return (1);
	else
		return (0);
}
