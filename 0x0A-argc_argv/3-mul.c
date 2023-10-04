#include "main.h"
#include <stdio.h>

int my_atoi(char *str)
{
	int res = 0;
	int i;

	for (i = 0; str[i] != '\0'; ++i)
		res = res*10 + str[i] - '0';

	return res;
}

/**
 * main - multiplies two numbers.
 * @argc: number of arguments.
 * @argv: array of arguments.
 *
 * Return: 0 if successful, 1 otherwise.
 */
int main(int argc, char *argv[])
{
	int num1, num2, product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = my_atoi(argv[1]);
	num2 = my_atoi(argv[2]);
	product = num1 * num2;

	printf("%d\n", product);

	return (0);
}
