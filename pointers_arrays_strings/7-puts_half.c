#include "main.h"

/**
 *
 *
 */
void puts_half(char *str)
{
	int alm, p, i;

	alm = 0;

	while (str[alm] != '\0')
	{
		alm++;
	}
	
	if (alm % 2 == 0)
	{
		p = alm / 2;

		while (str[p] != '\0')
		{
			_putchar(str[p]);
			p++;
		}
	}
	else if (alm % 2)
	{
		i = (alm - 1) / 2;
		while (i < alm - 1)
		{
			_putchar(str[i + 1]);
			i++;
		}
	}
	_putchar('\n');
}
