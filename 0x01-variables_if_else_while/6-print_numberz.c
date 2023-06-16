 #include <stdio.h>
/**
 * main - Entry point
 * Print the alphabet in lowercases
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
