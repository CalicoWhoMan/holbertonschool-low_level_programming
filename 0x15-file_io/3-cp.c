#include "holberton.h"
/**
 * main - program that copies the content of a file to another file
 * @argc: arguments
 * @argv: array sting's arguments
 * Return: 0
 */

int main(int argc, char *argv[])

{
	int file_start, file_end,  trim;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_start = open(argv[1], O_RDONLY);
	if (file_start == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_end = open(argv[2], O_CREAT | O_WRONLY, 0664);
	if (file_end == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((trim = read(file_start, buffer, 1024)) > 0)
	{
	if (write(file_end, buffer, trim) != trim)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	}
	if (trim == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[2]);
		exit(99);
	}
	if ((close(file_start) == -1) || (close(file_end) == -1))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_start);
		exit(100);
	}
	return (0);
}
