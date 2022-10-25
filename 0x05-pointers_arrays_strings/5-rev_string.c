#include "main.h"

/**
 * *rev_string - reverses strings
 *
 * @s: value to be evaluated
 *
 * Return: void
 *
 */

void rev_string(char *s)
{
	int k = 0;
	int l = 0;
	char *r = s;
	int z = 0;
	int m;
	char d;

	while (*r != '\0')
	{
		r++;
		k++;
	}
	l = k - 1;
	for (; z < ((l / 2) + 1); z++)
	{
		m = (l - z);
		d = s[z];
		s[z] = s[m];
		s[m] = d;
	}
}
