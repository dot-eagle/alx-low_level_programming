
#include "main.h"


/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * Description
 * @t: string to make CAPS
 *
 * Return: pointer to string
 *
 */

char *string_toupper(char *t)
{
	int e = 0;

	while (t[e])
	{
		if (t[e] >= 'a' && t[e] <= 'z')
			t[e] -= 32;

		e++;
	}

	return (t);
}
