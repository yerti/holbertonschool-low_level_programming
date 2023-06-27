#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: first parameter
 *
 */
void rev_string(char *s)
{
	char count;
	int y, alm, i;

	y = 0;

	while (s[y] != 0)
	{
		y++;
	}
	alm = y - 1;

	for (i = 0; i  <= alm; i++)
	{
		count = s[i];
		s[i] = s[alm];
		s[alm--] = count;

	}
}
