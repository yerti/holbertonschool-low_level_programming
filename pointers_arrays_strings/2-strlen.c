#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: first parameter
 * Return: returns the length of characters
 */
int _strlen(char *s)
{
	int y;

	y = 0;

	while (s[y] != '\0')
	{
		y++;
	}
	return (y);
}
