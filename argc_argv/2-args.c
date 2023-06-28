#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: first parameter
 * @argv: second parameter
 *
 * Return: Always 0 success
 */
int main(__attribute__((unused)) int argc, __attribute__((unused))char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
