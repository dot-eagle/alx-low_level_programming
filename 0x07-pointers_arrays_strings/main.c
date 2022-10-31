
#include "main.h"

/**
 * main - check the code
 *
 * Return: 0 Always 0
 * */

int main(void)
{
	char *s = "world of this";

	char *f = "world";
	char *t;

	t = _strstr(s, f);
	printf("%s\n", t);
	return (0);
}
