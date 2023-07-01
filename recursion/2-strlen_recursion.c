#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: first parameter
 *  Return: the length of string
 */
int _strlen_recursion(char *s)
{
	int i = 1;

	if (*s == '\0')
	{
		return (0);
	}
	return (i + _strlen_recursion(s + 1));
}
