#include <stdio.h>
#include "main.h"

/**
 * main - prints its name, followed by a new line
 * @argc: first parameter
 * @argv: second parameter
 *
 * Return: Always 0 success
 */
int main(__attribute__((unused)) int argc, __attribute__((unused))char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
