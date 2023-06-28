#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: first parameter
 * @argv: second parameter
 *
 * Return: always 0 success
 */
int main(__attribute__((unused)) int argc, __attribute__((unused))char *argv[])
{

	printf("%d\n", argc - 1);
	return (0);
}
