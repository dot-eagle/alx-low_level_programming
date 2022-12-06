#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file name
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */


int append_text_to_file(const char *filename, char *text_content)
{
	int file, wr, b;
	b = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	while (text_content[b])
		b++;
	if (text_content == NULL)
	{
		close(file);
		return (1);
	}
	else
	{
		wr = write(file, text_content, b);
	}
	if (wr == -1)
	{
		return (-1);
	}
	close(file);
	return (1);
}
