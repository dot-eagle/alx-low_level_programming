#include "main.h"


/**
 * read_textfile - reads a text file and prints it to POSIX s/o
 * @filename: file name
 * @letters: number of letters to read and print
 *
 * Return: return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, val, read_val;
	char *buff;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY, 0700);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	read_val = read(fd, buff, letters);
	if (read_val == -1)
	{
		free(buff);
		return (0);
	}
	val = write(STDOUT_FILENO, buff, read_val);
	if (val == -1)
	{
		free(buff);
		return (0);
	}
	close(fd);
	return (val);
}
