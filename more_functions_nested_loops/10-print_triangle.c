#include "main.h"

/**
 * print_triangle - print a triangle
 * @size: first parameter
 *
 */
void print_triangle(int size)
{
	int line, space, numeral;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (line = 1; line <= size; line++)
		{
			for (space = size; space > line; space--)
			{
				_putchar(32);
			}
			for (numeral = 1; numeral <= line; numeral++)
			{
				_putchar(35);
			}

			_putchar('\n');
		}
	}
}
