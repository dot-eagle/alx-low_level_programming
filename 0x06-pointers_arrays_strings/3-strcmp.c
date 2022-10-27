#include "main.h"

/**
 * _strcmp - function comparison of strings
 * _strcmp: function that compares two strings
 * Description: 'the program's description'
 * @s1: string 1
 * @s2: string 2
 *
 * Return: h-integer
 */

int _strcmp(char *s1, char *s2)
{
	int e, h;

	h = 0;

	for (e = 0; s1[e] != '\0' && s2[e] != '\0'; e++)
	{
		if (s1[e] != s2[e])
		{
			h = s1[e] - s2[e];
			break;
		}
	}
	return (h);
}
