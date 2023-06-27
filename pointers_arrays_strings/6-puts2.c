#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: first parameter
 */
void puts2(char *str)
{
	int y;

	y = 0;

	while (str[y] != '\0')
	{
		_putchar(str[y]);
		y += 2;
	}
	_putchar('\n');
}
