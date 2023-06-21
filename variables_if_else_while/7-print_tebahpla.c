#include <stdio.h>

/**
 * main - first program
 *
 * Description: writing variables
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	/* a = alphabet */
	char a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}

	putchar('\n');
	return (0);
}
