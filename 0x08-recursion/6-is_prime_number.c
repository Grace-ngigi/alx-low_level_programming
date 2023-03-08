#include "main.h"
/**
 * is_prime_number - Checks if integer is a prime number
 * @n: int beng checked
 * Return: 1 if prime number, otherwise 0
 */
int is_prime_number(int n)
{
	int i;

	i = 2;

	if (n == 2)
		return (1);
	if (n < 2)
		return (0);
	return (check_prime(n, i));
}

/**
 * check_prime - checks if number is prime
 * @num : number being checked
 * @i: iterator
 * Return: 0
 */
int check_prime(int num, int i)
{
	if (i == num - 1)
		return (1);
	else if (num % i == 0)
		return (0);
	if (num % i != 0)
		return (check_prime(num, i + 1));
	return (0);
}
