#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments passed to the program
 * @argv: array of arguments passed to the program
 * Return: 0 on success
 * or other value on failure with exit status set accordingly
 */
int main(int argc, char **argv)
{
	int n, i;
	unsigned char *op;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	op = (unsigned char *)main;

	for (i = 0; i < n; i++)
	{
		printf("%02x", op[i]);
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
