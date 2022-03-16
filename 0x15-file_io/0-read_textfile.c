#include "main.h"

/**
 *read_textfile  - reads a text file and prints it to the POSIX std output
 *@filename: file name
 *@letters: number of chars
 *
 *Return: 0 if fails otherwise the number of chars
 */

ssize_t read_textfile(const char *filename, size_t letters)

{
	ssize_t opens, reads, writes;
	char *p;

	p = malloc(sizeof(char) * letters);

	if (filename == NULL || p == NULL)
	{
		return (0);
	}

	opens = open(filename, O_RDONLY);
	reads = read(opens, p, letters);
	writes = write(STDOUT_FILENO, p, reads);

	if (opens == -1 || reads == -1 || writes == -1)
	{
		return (0);
	}

	close(opens);
	return (writes);
	free(p);
}
