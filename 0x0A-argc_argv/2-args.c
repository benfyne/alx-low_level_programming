#include <stdio.h>
/**
 * main - print all argument it receives
 *
 * @argc: first argument
 * @argv: argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	for (int i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i])
	}
	return (0);
}
