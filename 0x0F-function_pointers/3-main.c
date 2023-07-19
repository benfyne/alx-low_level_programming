#include "3-calc.h"
/**
 * main - performs simple operations on two integers
 * @argc: number of arguments passed to the program
 * @argv: array of arguments passed to the program
 * Return: 0 on success or other
 * value on failure with exit status set accordingly
 */
int main(int argc, char **argv)
{
	int num1, num2;
	char *op;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];

	func = get_op_func(op);

	if ((func == NULL) || ((op[0] == '/' || op[0] == '%') && (num2 == 0)))
	{
		printf("Error\n");
		exit(99 + !!func);
	}
	printf("%d\n", func(num1, num2));
	return (0);
}
