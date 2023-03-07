#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: pointer to a string
 * @needle: String being located
 * Return: pointer to beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *ptr_haystack = haystack;
		char *ptr_needle = needle;

		while (*ptr_needle && *haystack && *haystack == ptr_needle)
		{
			haystack++;
			ptr_needle++;
		}

		if (!*ptr_needle)
		{
			return (ptr_haystack);
		}
		haystack = ptr_stack + 1;
	}
	return (0);
}
