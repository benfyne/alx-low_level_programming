#include "main"
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
	int flag = 1;

	while (s[i] != '\0')
	{
		if (flag == 1 && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
			flag = 0;
		}
		else if (s[i] == ' ' ||
			s[i] == '\t' ||
			s[i] == '\n' ||
			s[i] == ',' ||
			s[i] == ';' ||
			s[i] == '.' ||
			s[i] == '!' ||
			s[i] == '?' ||
			s[i] == '"' ||
			s[i] == '(' ||
			s[i] == ')' ||
			s[i] == '{' ||
			s[i] == '}')
		{
			flag = 1;
		}
		i++;
	}
	return (s);
}
