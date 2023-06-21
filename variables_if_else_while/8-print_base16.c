#include <stdio.h>

/**
 * main - first program
 *
 * Desccripttion: Writing variables
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int num;

	for (num = 0; num <= 15; num++)
	{
		putchar(num + '0');
	}

	putchar('\n');
	return (0);
}
