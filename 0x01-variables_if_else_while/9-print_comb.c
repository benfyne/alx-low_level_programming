 #include <stdio.h>
/**
 * main - Entry point
 * Print all possible combinations of single-digit numbers
 * seperated by a comma
 * Followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
		putchar(x);
		if (x == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
