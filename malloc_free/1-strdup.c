#include "main.h"
#include <stdlib.h>

/**
 * _strdup - devuelva un puntero a un espacio recién asignado en la memoria
 * @str: text string
 * Return: a pointer to the duplicated string
 */
char *_strdup(char *str)
{
	unsigned int i = 0;
	unsigned int n = 0;
	char *y;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i])
		i++;

	y = malloc(sizeof(char) * (i + 1));

	if (y == NULL)
		return (NULL);

	while (str[n])
	{
		y[n] = str[n];
		n++;
	}

	y[n + 1] = 0;
	return (y);
}

