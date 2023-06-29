#include "main"
#include <ctype.h>
/**
 * *cap_string - Capitalize all words of a string
 *
 * @s: string
 *
 * Return: s
 */
char *cap_string(char *s)
{
	int i = 0;
	int capitalize_next = 1;

	while (str[i] != '\0')
	{
		if (capitalize_next && isalpha(str[i]))
		{
			str[i] = toupper(str[i]);
			capitalize_next = 0;
		}
		else if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == ',' || str[i] == ';' || str[i] == '.' ||
			str[i] == '!' || str[i] == '?' || str[i] == '"' ||
			str[i] == '(' || str[i] == ')' || str[i] == '{' ||
			str[i] == '}')
		{
			capitalize_next = 1;
		}
		i++;
	}
	return (str);
}
