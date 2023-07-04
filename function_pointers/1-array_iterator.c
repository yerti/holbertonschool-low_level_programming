#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function given as a parameter
 * @array: first paramter
 * @size: second parameter
 * @action: third parameter
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
