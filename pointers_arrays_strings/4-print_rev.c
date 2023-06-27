#include "main.h"
/**
 * print_rev -  prints a string, in reverse, followed by a new line
 * @s: first parameter
 *
 */
void print_rev(char *s)
{
	int y;

	for (y = 63; y >= 0; y--)
	{
		_putchar(s[y]);
	}
	_putchar('\n');

}
