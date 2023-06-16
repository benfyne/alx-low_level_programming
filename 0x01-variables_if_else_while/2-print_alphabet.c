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
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++);
	{
		putchar(ch);
		putchar('\n');
	}
	return (0);
}
