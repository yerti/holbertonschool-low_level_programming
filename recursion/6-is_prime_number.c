#include "main.h"

/**
 * prime - check if it is a prime number
 * @n: number to check if it is prime
 * @i: is the iteratori
 * Return: we return one because if it is a prime number
 */
int prime(int n, int i)
{
	if (i < n)
	{
		if (n % i  == 0)
		{
			return (0);
		}
		return (prime(n, i + 1));
	}
	else if ( i > n)
	{
		return (0);
	}
	return (1);
}
/**
 * is_prime_number - calls the recursive function
 * @n: number to check if it is prime
 * Return: we return if the number is prime
 */
int is_prime_number(int n)
{
	int i = 2, almr;
	almr = prime(n, i);
	return (almr);
}



