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
	int x = 122;

	while (x >= 97)
	{
		putchar(x);
		x--;
	}
	putchar('\n');
	return (0);
}
