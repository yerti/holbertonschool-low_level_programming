#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index -  function that searches for an integer
 * @array: first parameter
 * @size: second paramater
 * @cmp: third parameter
 * Return: -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
	{
		return (-1);
	}

	if (array != NULL && cmp != NULL)
	{
		while (i < size)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
			i++;
		}
	}
	return (-1);

}
