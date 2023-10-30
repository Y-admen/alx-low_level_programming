#include "main.h"
/**
 * creat_file -  creates a file.
 * @text_content: text to be written
 * @filename: file name
 * Return: 1 on success
 * -1 fail
 */

int create_file(const char *filename, char *text_content)
{
	int op, wr, len = 0;

	if (!filename)
		return (-1);

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (text_content == NULL)
		text_content = "";
	while (text_content[len])
		len++;

	wr = write(op, text_content, len);
	if (op == -1 || wr == -1)
		return (-1);
	close(op);
	return (1);
}
