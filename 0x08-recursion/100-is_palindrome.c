#include "main.h"
/**
 * is_palindrome - checks for a palindrome
 * @s: string being checked
 * Return: 1 if it is a palindrome otherwise 0
 */
int is_palindrome(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		continue;
	return (check_string(s, 0, i - 1));
}
/**
 * check_string - checks if strigng is palindrome
 * @str: string evaluated
 * @left: left part of the string
 * @right: right side of the string
 * Return: the str, left and right parts
 */
int check_string(char *str, int left, int right)
{
	if (left >= right)
		return (1);
	else if (str[left] == str[right])
		return (check_string(str, left + 1, right - 1));
	else
		return (0);
}
