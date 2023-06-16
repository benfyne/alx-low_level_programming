 #include <stdio.h>
/**
 * main - Entry point
 * Print the single digits of base 10 starting from 0
 * Followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		printf("%d", x);
	}
	printf("\n");
	return (0);
}
