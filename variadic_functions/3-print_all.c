#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * p_char -
 *
 *
 */
void p_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 *
 *
 *
 */
void p_integer(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 *
 *
 *
 */
void p_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 *
 *i
 */
void p_string(va_list ap)
{
	char *letter;

	letter = va_arg(ap, char *);
	if (letter == NULL)
	{
		letter = "(nil)";
	}
	printf("%s", letter);
}


/**
 *
 *
 *
 */
void print_all(const char * const format, ...)
{
	print_t prints[] = {
        {"c", p_char},
        {"i", p_integer},
        {"f", p_float},
        {"s", p_string},
        {NULL, NULL}
        };

	unsigned int i = 0, j = 0;
	va_list ap;
	char *separator = "";
	
	va_start(ap, format);

	while(format[i])
	{
		j = 0;
		while(prints[j].p)
		{
			if (format[i] == *prints[j].p)
			{
				printf("%s", separator);
				prints[j].f(ap);
				separator = ", ";
			}
			j++;
		}

		i++;
	}

	printf("\n");
	va_end(ap);
}



