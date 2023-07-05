#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - execute the operator given to it
 * @rgc: first paramater
 * @argv: second parameter
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	char *operator = argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		return (99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}
	return (printf("%d\n", get_op_func(operator)(num1,num2)));
}

		



