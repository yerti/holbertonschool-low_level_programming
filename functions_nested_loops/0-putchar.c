#include <stdio.h>
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
	int i;
	char *word = "_putchar";

	for (i = 0; i < 8; i++)
	{
		_putchar(word[i]);
	}

	_putchar('\n');
	return (0);
}
