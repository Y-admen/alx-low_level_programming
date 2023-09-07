#include <unistd>
/**
 * main- entry point
 *
 * description: print text withou put,printf
 *
 * return 1
*/
int main(void)
{	char lin[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(1, lin, 59);
	return (10);
}
