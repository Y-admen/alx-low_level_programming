#include "main.h"
/***
 */

int create_file(const char *filename, char *text_content)
{
	int op, wr, len = 0;

	if (!filename)
		return (-1);

	op = open(filename, O_RDWR, O_CREAT, O_TRUNC);
	while (text_content[len])
	{
		len++;
	}

	wr = write(op, text_content, len);
	if (op == -1 || wr == -1)
		return (-1);
	close(op);
	return (1);
}
