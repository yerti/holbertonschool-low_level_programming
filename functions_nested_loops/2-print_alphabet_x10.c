#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lower case* 10 times
 *
 * Description: This program print the alphabet.
 *
 * Return: Always 0.
*/
void print_alphabet_x10(void)
{
	char a;
	int num;

	for (num = 0; num <= 10; num++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
