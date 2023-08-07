#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

#define BUFSIZE 1024

#define USAGE "Usage: cp file_from file_to\n", 97
#define READ_ERROR "Error: Can't read from file %s\n", argv[1], 98
#define WRITE_ERROR "Error: Can't write to %s\n", argv[2], 99
/**
 * error_exit - prints an error message and exits with a code
 * @format: the format string
 * @...: the arguments for the format string
 */
void error_exit(const char *format, ...)
{
	va_list args;

	va_start(args, format);
	vdprintf(STDERR_FILENO, format, args);
	va_end(args);
	exit(va_arg(args, int));
}
/**
 * main - copies the content of a file to another file
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: 0 on success, exit with code on failure
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	char buffer[BUFSIZE];
	ssize_t n_read, n_write;

	if (argc != 3)
		error_exit(USAGE);
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_exit(READ_ERROR);
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		error_exit(WRITE_ERROR);
	}
	while ((n_read = read(fd_from, buffer, BUFSIZE)) > 0)
	{
		n_write = write(fd_to, buffer, n_read);
		if (n_write == -1 || n_write != n_read)
		{
			close(fd_from);
			close(fd_to);
			error_exit(WRITE_ERROR);
		}
	}
	if (n_read == -1)
	{
		close(fd_from);
		close(fd_to);
		error_exit(READ_ERROR);
	}
	if (close(fd_from) == -1)
		error_exit(CLOSE_ERROR, fd_from);
	if (close(fd_to) == -1)
		error_exit(CLOSE_ERROR, fd_to);
	return (0);

}
