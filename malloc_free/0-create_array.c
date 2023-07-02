#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - reton a pointer
 * @size: the size value
 * @c: characters
 * Return: pointer the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str = malloc(sizeof(char) * size);

	if (str == NULL || str == 0)
		return (NULL);

	i = 0;
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
