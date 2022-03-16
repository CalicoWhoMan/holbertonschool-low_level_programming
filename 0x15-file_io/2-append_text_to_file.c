#include "holberton.h"
/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: file name
 * @text_content: char string to add
 * Return: -1 on failure otherwise 1 for success
 */

int append_text_to_file(const char *filename, char *text_content)

{

	int atf;

	if (filename)
	{
		if (text_content == NULL)
			text_content = "";
		atf = open(filename, O_RDWR | O_APPEND);

		if (filename == NULL)
			return (-1);
		if (atf == -1)
		{
			return (-1);
		}
		write(atf, text_content, strlen(text_content));
		close(atf);
		return (1);
	}
	return (-1);
}
