#include "main.h"

/**
 * str_checker - checks if 2 string is identical
 * @s1: string_1 base address
 * @s2: string_2 base address
 * @i: left index
 * @j: right index
 * Return: 1 if s is palindrome, 0 if otherwise
 */
int str_checker(char *s1, char *s2, int i, int j)
{
	if (s1[i] == '\0' && s2[j] == '\0')
		return (1);
	if (s1[i] == s2[j])
		return (str_checker(s1, s2, i + 1, j + 1));
	if (s1[i] == '\0' && s2[j] == '*')
		return (str_checker(s1, s2, i, j + 1));
	if (s2[j] == '*')
		return (str_checker(s1, s2, i + 1, j) || str_checker(s1, s2, i, j + 1));
	return (0);
}

/**
 * wildcmp - checks if string is considered identical
 * @s1: string base address
 * @s2: string base address
 *
 * Return: 1, if they are considered identical
 */
int wildcmp(char *s1, char *s2)
{
	return (str_checker(s1, s2, 0, 0));
}
