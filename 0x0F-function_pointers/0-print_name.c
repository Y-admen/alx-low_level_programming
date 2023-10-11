#include "function_pointers.h"

/**
 * print_name - used to pass the argument name to
 * the func pointer f that calls a function that contain
 * the code to print name
 * @name: char
 * @f: func pointer
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
/*
 * the o/p from main.c depends on the argument f if points to
 * print_name_as_is func or print_name_uppercase
*/
}
