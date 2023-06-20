#include <stdio.h>

/**
 * main - first program
 *
 * Description: Writing variables
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	/* a = alphabet*/
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}

	putchar('\n');
	return (0);
}
