#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * @src: buffer to copy the string src to
 * @dest: source string to copy to src
 * Description
 *
 * Return: void
 */

char *_strcpy(char *dest, char *src)
{
	int id = 0;
	int ex = 0;

	while (*(src + id) != '\0')
	{
		id++;
	}
	for (; ex < id; ex++)
	{
		dest[ex] = src[ex];
	}
	dest[id] = '\0';
	return (dest);
}
