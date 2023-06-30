#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: first parameter
 * @src: second parameter
 * Return: the parameter dest
 */
char *_strcpy(char *dest, char *src)
{
	char *temp = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	
	*dest = '\0';
	return (temp);
}
