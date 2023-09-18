#include "main.h"

/**
 * _strlen -  returns the length of a string.
 * @s: char parameter
 * Return: value of coun
*/

int _strlen(char *s)
{
	int coun;

	for (coun = 0; s != "\0"; s++)
		coun++;
	return (coun);
}

