#include "function_pointers.h"


/**
 * print_name - prints a name
 * @name: name to print, a pointer
 * @f: pointer variable
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
	{
		return;
	}
	f(name);
}
