#include "main.h"
/**
 * _puts - prints a string, followed by a new line
 * @str: first parameter
 *
 */
void _puts(char *str)
{
	int y;

	y = 0;

	while (str[y] != '\0')
	{
		_putchar(str[y]);
		y++;
	}
	_putchar('\n');

}
