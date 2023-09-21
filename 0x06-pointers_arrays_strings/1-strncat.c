#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 * @dest: input parameter
 * @src: input parameter
 * @n:input parameter
 * Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int c, c1;

        c = 0;
        while (dest[c] != '\0')
                c++;
        for (c1 = 0; c1 < n && src[c1] != '\0'; c1++)
                dest[c++] = src[c1];
        dest[c] = '\0';
        return (dest);
}
