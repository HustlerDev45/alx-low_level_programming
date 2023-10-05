#include "main.h"
#include <stdio.h>
/**
 * main - multiplies two numbers.
 * @argc: number of arguments.
 * @argv: array of arguments.
 *
 * Return: 0 (Success), 1 otherwise.
 */
int main(int argc, char *argv[])
{
	int num1, num2, product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = 0;
	for (int i = 0; argv[1][i] != '\0'; ++i)
		num1 = num1 * 10 + argv[1][i] - '0';

	num2 = 0;
	for (int i = 0; argv[2][i] != '\0'; ++i)
		num2 = num2 * 10 + argv[2][i] - '0';

	product = num1 * num2;

	printf("%d\n", product);

	return (0);
}
