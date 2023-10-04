#include "main.h"
#include <stdlib.h>

/**
 * *_strdup -  returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: pointer to string
*/

char *_strdup(char *str)
{
	int len = 0, i;
	char *s;

	if (str == 0)
		return (null);
	while (str[len] != '\0')
	{
		len++;/*find len if str*/
	}
	s = malloc(len * sizeof(str) + 1);/*space for the null '\0'*/
	if (s == 0)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < len; i++)
		s[i] = str[i];
	}
	return (s);
}


