#include "main.h"
/**
 * print_rev -  prints a string, in reverse, followed by a new line
 * @s: first parameter
 *
 */
void print_rev(char *s)
{
	int y, alm, i;

	y = 0;

	while (s[y] != 0)
	{
		y++;
	}
	alm = y - 1;

	for (i = 0; i  <= alm; i++)
	{
		_putchar(s[alm - i]);
	}
	_putchar('\n');

}
