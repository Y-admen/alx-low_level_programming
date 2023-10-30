#include "main.h"

/**
 * read_textfile -  function that reads a text file and prints it to stdout
 * @filename :filename
 * @letters: num of letters
 * Return: wr
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, re, wr;
	char *ptr;

	if (filename == NULL)
		return (0);
	ptr = malloc(sizeof(char) * letters);
	if (!ptr)
		return (0);
	op = open(filename, O_RDONLY);
	re = read(op, ptr, letters);
	wr = write(re, ptr, letters);

	if (op == -1 || re == -1 || wr == -1)
	{
		free(ptr);
		return (0);
	}
	free(ptr);
	return (wr);
}
