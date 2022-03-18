#include "main.h"

/**
 *read_textfile  - reads a text file and prints it to the POSIX output of file
 *@filename: file name
 *@letters: number of chars is should read and print
 *
 *Return: 0 otherwise the POSIX output of file
 */

ssize_t read_textfile(const char *filename, size_t letters)

{
	ssize_t opens, reads, writes;
	char *p2L;

	p2L = malloc(sizeof(char) * letters);
	/*size of all letters in a file*/

	if (filename == NULL || p2L == NULL)
	{
		return (0);
	}
	/*checking to see if file is empty*/
	opens = open(filename, O_RDONLY);
	reads = read(opens, p2L, letters);
	writes = write(STDOUT_FILENO, p2L, reads);

	if (opens == -1 || reads == -1 || writes == -1)
	{
		return (0);
	}

	close(opens);
	return (writes);
	free(p2L);
}
