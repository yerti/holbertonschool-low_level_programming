#include "main.h"

/**
 * print_diagonal - print a slash on the line
 * @n: first parameter
 *
 */
void print_diagonal(int n)
{
	int l, s;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (l = 0; l < n; l++)
		{
			for (s = 0; s <= l; s++)
			{
				if (l == s)
				{
					_putchar(92);
				}
				else
				{
					_putchar(32);
				}
			}
			_putchar('\n');
		}
	}

}
