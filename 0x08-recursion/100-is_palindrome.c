#include "main.h"
int is_equal(char *s, int start, int end);
int _strlen_recursion(char *s);
/**
 * is_palindrome - palindrome
 *
 * @s: string
 *
 * Return: 0
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (is_equal(s, 0, len - 1));
}
/**
 * _strlen_recursion - helper function
 *
 * @s: string
 *
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * is_equal - first and last character
 *
 * @s: string
 * @start: beginning
 * @end: last
 *
 * Return: 0
 */
int is_equal(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (is_equal(s, start + 1, end - 1));
}
