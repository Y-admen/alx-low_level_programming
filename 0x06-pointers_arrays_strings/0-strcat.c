#include "main.h"
/**
 * _strcat -  function that concatenates two strings.
 * @dest: char parameter
 * @src: char parameter
 * Return: dest
*/
char *_strcat(char *dest, char *src)
{
	int c, c1;

	c = 0;
	while (dest[c])
		c++;
	for (c1 = 0; src[c1] != "\0"; c1++)
		dest[c++] = src[c0];
	return (dest);
}

