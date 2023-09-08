#include <unistd>
/**
 * main- entry point
 *
 * description:  C program that prints exactly a text  followed by a new line
 *
 * Return: always 1 (fail)
*/
int main(void)
{	char  *lin = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(1, lin, 59);
	return (1);
}
