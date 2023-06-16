 #include <stdio.h>
/**
 * main - Entry point
 * Print the alphabet in lowercases
 * Except q and e
 * Followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 97;

	while (x <= 122)
	{
		if (x == 101 || x == 113)
		{
			x++;
			continue;
		}
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
