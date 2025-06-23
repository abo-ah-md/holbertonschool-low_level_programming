#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_error_and_exit - Prints an error message and exits
 * @code: Exit status
 * @message: Error message format
 * @file: Related filename
 */
void print_error_and_exit(int code, const char *message, const char *file)
{
	dprintf(STDERR_FILENO, message, file);
	exit(code);
}
/**
 * main - Copy content of a file to another file
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 on success, exits otherwise
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, close_from, close_to;
	ssize_t read_bytes, written_bytes;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		print_error_and_exit(98, "Error: Can't read from file %s\n", argv[1]);
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd_to == -1)
	{
		close(fd_from);
		print_error_and_exit(99, "Error: Can't write to %s\n", argv[2]);
	}
	while ((read_bytes = read(fd_from, buffer, BUF_SIZE)) > 0)
	{
		written_bytes = write(fd_to, buffer, read_bytes);
		if (written_bytes == -1 || written_bytes != read_bytes)
		{
			close(fd_from);
			close(fd_to);
			print_error_and_exit(99, "Error: Can't write to %s\n", argv[2]);
		}
	}
	if (read_bytes == -1)
	{
		close(fd_from);
		close(fd_to);
		print_error_and_exit(98, "Error: Can't read from file %s\n", argv[1]);
	}
	close_from = close(fd_from);
	if (close_from == -1)
		print_error_and_exit(100, "Error: Can't close fd %d\n", fd_from);
	close_to = close(fd_to);
	if (close_to == -1)
		print_error_and_exit(100, "Error: Can't close fd %d\n", fd_to);
	return (0);
}
