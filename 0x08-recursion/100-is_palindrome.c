#include "main.h"

int real_pal_check(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0) /*check if string is empty*/
	return (1);
	return (real_pal_check(s, 0, _strlen_recursion(s)));
}
/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * real_pal_check - checks the characters recursively for palindrome
 * @s: string to check
 * @i: iterator
 * @len: length of the string
*
 * Return: 1 if palindrome, 0 if no
 */
int real_pal_check(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
	return (0);
	if (i >= len)/*if reach end of the string, all char are the same thin pal*/
	return (1);
	return (real_pal_check(s, i + 1, len - 1));
}

