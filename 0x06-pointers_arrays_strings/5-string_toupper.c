#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: variable containing string
 * Return: pointer to the string with uppercased letters
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] > 'a' && s[i] <= 'z')
			s[i] = s[i] - 'a' + 'A';
	}
}
