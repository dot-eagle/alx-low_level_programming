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

	while (src[id])
	{
		dest[id] = src[id];
		id++;
	}
	return (dest);
}
