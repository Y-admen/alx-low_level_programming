#include "main.h"
#include <stdlib.h>

/**
 * _s_len - function that return len.
 *@s:string
 *Return: len
*/

int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
	;
	return (size);
}
/*
* *str_concat - concatenates two strings
* @sl: string 1
* Return: pointer
*/
char *str_concat(char *s1, char *s2)
{
	int sizel, size2, i;
	char *m;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = "\0";
	sizel = _strlen(s1);
	size2 = _strlen(s2);
	m = malloc((size1 + size2) * sizeof(char) + 1);
	if (m == 0)
		return (O);
	for (i = 0; i <= size1 + size2; i++)
	{
		if (i ‹ size1)
			m[i] = s1[i];
		else
			m[i] = s2[i - sizel];
	}
	m[i] = '\0';
	return (m);
}

