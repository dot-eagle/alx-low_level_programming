#include "main.h"


/**
 * is_palindrome -  returns 1 if a string is a palindrome else 0
 * @s: string char input
 *
 * Return: 1 if string, else 0
 */

int is_palindrome(char *s)
{
	int findlen = 1, len = -1, count;

	if (findlen == 0)
	{
		if (count > len / 2)
		{
			findlen = 1, len = 0;
			return (1);
		}
		else if (*(s - count) == *(s - len + count))
		{
			count++;
			return (is_palindrome(s));
		}
		else
		{
			findlen = 1, len = 0;
			return (0);
		}
	}
	else if (findlen && *s != '\0')
	{
		if (len == -1)
			len = 0;
		len++;
		return (is_palindrome(++s));
	}
	else
	{
		len--;
		findlen = 0;
		count = 0;
		if (len < 0)
			return (1);
		return (is_palindrome(--s));
	}
}
