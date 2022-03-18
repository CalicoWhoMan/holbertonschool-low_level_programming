#include "main.h"
/**
 * append_text_to_file - appends a file if it exists
 * @filename: file name
 * @text_content: all the chars in the file
 * Return: -1 on failure otherwise 1 for success
 */

int append_text_to_file(const char *filename, char *text_content)

{

	int newfile;

	if (filename)
	{
		if (text_content == NULL)
			text_content = "";
		newfile = open(filename, O_RDWR | O_APPEND);
		/*newfile is |rw-|r--|r--, append, the file's text*/

		if (filename == NULL)
			return (-1);
		if (newfile == -1)
		{
			return (-1);
		}
		write(newfile, text_content, strlen(text_content));
		/*write the new text conent into the newfile and close it*/
		close(newfile);
		return (1);
	}
	return (-1);
}
