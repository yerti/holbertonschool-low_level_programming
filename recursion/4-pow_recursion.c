#include "main.h"

/**
 * _pow_recursion - print the numbe x to the power of and
 * @x: power base
 * @y: power exponent
 * Return: power result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	return (x * _pow_recursion(x, y - 1));

}
