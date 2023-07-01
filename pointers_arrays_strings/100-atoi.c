#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: first parameter
 * Return: the number
 */
int _atoi(char *s)
{
	int signos = 0;
	int numi;
	unsigned int number = 0;

	for (numi = 0; s[numi] != '\0'; numi++)
	{
		if (s[numi] == '-')
		{
			signos++;
		}

		if (s[numi] >= 48 && s[numi] <= 57)
		{
			number = number * 10;
			number = number + (s[numi] - '0');

			if (s[numi + 1] > 57 || s[numi + 1] < 48)
			{
				break;
			}
		}
	}

	if (signos % 2 != 0)
	{
		number = number * -1;
	}
	return (number);




}
