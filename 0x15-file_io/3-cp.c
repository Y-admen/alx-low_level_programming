#include "main.h"

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define buff_s 1024
#define arg_err "Usage: cp file_from file_to\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)
#define read_err "Error: Can't read from file %s\n"
#define write_err "Error: Can't write to file %s\n"
#define close_err "Error: Can't close fd %d\n"

int main(int argc, char *argv[])
{
	int f1_op, f2_op;
	ssize_t re;
	char buf[buff_s];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, arg_err);
        	exit(97);}
	f1_op = open(argv[1], O_RDONLY);
	f2_op = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (f1_op == -1)
	{
        	dprintf(STDERR_FILENO, read_err, argv[1]);
        	exit(98);
	}
	if (f2_op == -1)
	{
        	dprintf(STDERR_FILENO, write_err, argv[2]);
        	exit(99);
	}
	re = read(f1_op, buf, buff_s);
	while (re > 0)
	{
		if (write(f1_op, buf, re) != re)
        	{
			dprintf(STDERR_FILENO, write_err, argv[2]);
        		exit(99);
        	}
	}
	if (re == -1)
	{
		dprintf(STDERR_FILENO, read_err, argv[1]);
		exit(98);
	}
	if (close(f1_op) == -1)
	{
		dprintf(STDERR_FILENO, close_err, f1_op);
		exit(100);
	}
	if (close(f2_op) == -1)
	{
		dprintf(STDERR_FILENO, close_err, f2_op);
		exit(100);
	}
	return (EXIT_SUCCESS);
}
