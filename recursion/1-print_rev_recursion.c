#include "main.h"

/**
 *
 *
 *
 */
void _print_rev_recursion(char *s)
{
	int carc = 0;
	if (s[carc] != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(s[carc]);
	}
}
