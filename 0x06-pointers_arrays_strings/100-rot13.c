#include "main.h"

/**
 * rot13 - function that encodes a string using rot13
 * @v: pointer variable v , of type character
 *
 * Return: encoded string pointer
 */

char *rot13(char *v)
{
	int c = 0, f;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(v + c) != '\0')
	{
		for (f = 0; f < 52; f++)
		{
			if (*(v + c) == alphabet[f])
			{
				*(v + c) = rot13[f];
				break;
			}
		}
		c++;
	}
	return (v);
}
