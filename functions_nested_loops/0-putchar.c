#include <unistd.h>
#include "main.h"

/**
 * main - first program
 *
 * Description: Writing functions
 *
 * Return: always 0 (success)
*/
int main(void)
{
	int n;
	char *text = "_putchar";

	for (n = 0; n < 8; n++)
	{
		_putchar(text[n]);
	}
	_putchar('\n');

	return (0);
}
