#include "main.h"

/**
 * recursion - returns the square root of the number
 * @n: the number that has to find the square root
 * @i: number that is multiplied by the square
 * Return: zero
 */
int recursion(int n, int i)
{
	int j, cuadrado;

	j = 1;
	cuadrado = i * i;
	if (n < 0)
	{
		return (-1);
	}
	else if (cuadrado > n)
	{
		return (-i);
	}
	else if (i * i == n)
	{
		return (1);
	}
	else if (i * i < n)
	{
		return (j + recursion(n, i + 1));
	}
	return (0);
}
/**
 * _sqrt_recursion - returns the result of the square root
 * @n: the number that has to find the square root
 * Return: the result of our recursion function
 */
int _sqrt_recursion(int n)
{
	int i, result;

	i = 1;
	result = recursion(n, i);
	return (result);
}
