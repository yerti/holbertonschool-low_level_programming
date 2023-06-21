#include <stdio.h>

/**
 * main -first program
 *
 * Description: writing variables
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	/* a = lowercase alphabet*/
	/* A = uppercase alphabet*/
	char a, b;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	for (b = 'A'; b <= 'Z'; b++)
	{
		putchar(b);
	}

	putchar('\n');
	return (0);
}

