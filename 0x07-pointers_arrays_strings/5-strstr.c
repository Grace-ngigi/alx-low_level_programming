#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: pointer to a string
 * @needle: String being located
 * Return: pointer to beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *ptr_haystack = haystack;
		char *ptr_needle = needle;

		while (*ptr_haystack == *ptr_needle && *ptr_needle != '\0')
		{
			ptr_haystack++;
			ptr_needle++;
		}
		if (*ptr_needle == '\0')
			return (haystack);
	}
	return (0);
}
