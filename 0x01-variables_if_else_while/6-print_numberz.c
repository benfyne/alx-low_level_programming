 #include <stdio.h>
/**
 * main - Entry point
 * Print single digits of base 10 using putchar
 * Followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar(x + 48);
	}
	putchar('\n');
	return (0);
}
