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
	/* n = numbers */
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}

	putchar('\n');
	return (0);
}
