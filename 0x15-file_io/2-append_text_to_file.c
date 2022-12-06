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
	int err, fdes, bytes;

	/* mode_t mode = S_IRUSR | S_IWUSR; */

	if (filename == NULL)
		return (-1);
	fdes = open(filename, O_WRONLY | O_APPEND);
	if (fdes == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fdes);
		return (1);
	}

	bytes = 0;
	while (text_content[bytes])
		bytes++;

	err = write(fdes, text_content, bytes);

	if (err == -1)
	{
		return (-1);
	}
	close(fdes);
	return (1);
}
