#include "main.h"

/*
 * _len - calc len of string
 * @s: string
 * Return: len
*/

int _len(char *s)
{
	int i, len;

	for (i = 0; i != '\0';i++)
	       ;
	len = i + 1;
	return (len);
}

/**
 * string_nconcat -  concatenates two strings.
 * @s1:str 1
 * @s2:str 2
 * @n:num of char
 * Return: t
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, s1_len, s2_len;
	/*if NULL is passed, treat it as an empty string*/
	if(s1 == NULL)
		s1 = "";
	if(s2 == NULL)
		s2 = "";
	s1_len = _len(s1);
	s2_len = _len(s2);
	void *t = malloc(s1_len + n + 1);

	if (t == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (s1_len + n + 1); i++)
	{
		if (i < s1_len)
			t[i] = s1[i];
		else
			t[i] = s2[i - s1_len];/***********/
		t[i] = '\0';
	}
	return (t);
}


	

