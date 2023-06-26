#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10
/**
 * main -  a program that generates random valid passwords
 * for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char password[PASSWORD_LENGTH + 1];
	const char charset[] = "abcdefghijklmnopqrstuvwxyz \
		ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	int i;

	srand(time(NULL));

	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		password[i] = charset[rand() % (sizeof(charset) - 1)];
	}
	password[PASSWORD_LENGTH] = '\0';

	printf("%s\n", password);

	return (0);
}

