#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - function that returns 1 if the input integer
 * @n: number
 * Return: 1 if a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_number_iteration(n, n - 1));
}

/**
 * is_prime_number_iteration - function
 * @n: number
 * @i: data
 * Return: 1 if it is prime, 0 otherwise
 */
int is_prime_number_iteration(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (is_prime_number_iteration(n, i - 1));
}
