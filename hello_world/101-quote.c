#include <unistd.h>
#include <string.h>

/**
 * main - Starting program
 *
 * Descripttion: Print
 *
 * Return: One equal success
*/
int main(void)
{
char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
int len = strlen(msg);
write(STDERR_FILENO, msg, len);
return (1);
}
