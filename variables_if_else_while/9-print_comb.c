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
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
