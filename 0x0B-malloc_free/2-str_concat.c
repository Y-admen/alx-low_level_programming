#include "main.h"
#include <stdlib.h>

/**
 * _s_len - function that return len.
 *@s:string
 *Return: len
*/

int _s_len(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
	;
	return (len);
}
/**
 * str_concat - function that concatenates two strings.
 *@s1:string
 *@s2:string
 *Return: string
*/
char *str_concat(char *s1, char *s2)
{
	int len1, len2, i;
	char *s;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';
	len1 = _s_len(s1);
	len2 = _s_len(s2);
	s = malloc((len1 + len2) * sizeof(char) + 1);
	if (s == 0)
		return (0);
	for (i = 0; i <= (len1 + len2); i++)
	{
		if (i < len1)
			s[i] = si[i];
		else
			s[i] = s2[i - len1];
	}
	s[i] = '\0';
	return (s);
}



