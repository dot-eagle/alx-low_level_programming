#include "main.h"

/**
 * main - copies the content of a file to another file
 * @av: argument vector
 * @ac: argument count
 *
 * Return: 0 on Success
 */

int main(int ac, char *av[])
{
	int file_f, file_to, rd, wr;
	char buff[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}
	file_f = open(av[1], O_RDONLY);
	if (file_f == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	}
	file_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	}
	while ((rd = read(file_f, buff, 1024)) != 0)
	{
		if (rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
		}
		wr = write(file_to, buff, rd);
		if (wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
		}
	}
	if (close(file_f) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_f), exit(100);
	}
	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);
	}
	return (0);
}
