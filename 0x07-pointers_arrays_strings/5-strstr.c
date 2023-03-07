#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: pointer to a string
 * @needle: String being located
 * Return: pointer to beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	char *ptr_haystack;
	char *ptr_needle;

	while (*haystack != '\0')
	{
		ptr_haystack = haystack;
		ptr_needle = needle;
		while (*haystack != '\0' && ptr_needle != '\0' && *haystack == *ptr_needle)
		{
			haystack++;
			ptr_needle++;
		}
		if (!*ptr_needle)
			return (ptr_haystack);
		haystack = ptr_haystack + 1;
	}
	return (0);
}
