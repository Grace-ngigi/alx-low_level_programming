#include "main.h"
/**
 * _islower - checks for lowercase character
 * @l:The character being checked
 * Return: I for success, 0 for failure
 */
int _islower(int l)
{
	if (l >= 'a' && l <= 'z')
		return (1);
	else
		return (0);
}
