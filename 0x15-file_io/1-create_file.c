#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: filename
 * @text_content: num of chars /string to insert
 * Return: -1 if fails, otherwise 1
 */

int create_file(const char *filename, char *text_content)

{
	int writes, opens, inc;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content)
	{
		for (inc = 0; text_content[inc] != '\0'; inc++)
			;
	}
	if (text_content == NULL)
	{
		opens = open(filename, O_CREAT, 0600);
		return (1);
	}
	if (filename)
	{
		opens = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
		writes = write(opens, text_content, inc);

		if (opens == -1 || writes == -1)
			return (-1);
	}
	close(opens);
	return (1);
}
