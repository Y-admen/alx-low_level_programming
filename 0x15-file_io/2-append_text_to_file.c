#include "main.h"

/**
 * append_text_to_file -  appends text at the end of a file
 * @filename: filename
 * @text_content: content to be written
 * Return: i on success, -1 fail
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, len = 0;

	if (!filename)
		return (-1);
	op = open(filename, O_WRONLY, O_APPEND);
	while (text_content[len])
		len++;
	if (text_content == NULL)
		text_content = "";
	if (text_content)
		wr = write(op, text_content, len);
	if (op == -1 || wr == -1)
	return (-1);

	close(op);
	return (1);

}
