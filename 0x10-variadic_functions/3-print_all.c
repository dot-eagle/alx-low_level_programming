#include "variadic_functions.h"

/**
 * print_char - print characters
 * @arguments: input arguments
 */

void print_char(va_list arguments)
{
	printf("%c", va_arg(arguments, int));
}

/**
 * print_int - print integers
 * @arguments: input arguments
 */

void print_int(va_list arguments)
{
	printf("%d", va_arg(arguments, int));
}

/**
 * print_float - print floats
 * @arguments: input arguments
 */

void print_float(va_list arguments)
{
	printf("%f", va_arg(arguments, double));
}

/**
 * print_string - print string
 * @arguments: input arguments
 */

void print_string(va_list arguments)
{
	char *args = va_arg(arguments, char*);

	if (args == NULL)
	{
		printf("%p", args);
		return;
	}
	printf("%s", args);
}

/**
 * print_all -  prints anything given as parameter or argument
 * @format: a list of types of arguments passed to the function
 *
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	symbol_t identifier[] = {
		{'c', print_char},
		{'s', print_string},
		{'f', print_float},
		{'i', print_int}
	};

	int b = 0, z = 0;
	char *comma = "";

	va_list arguments;

	va_start(arguments, format);

	while (format && format[z])
	{

		while (b < 4)
		{
			if (identifier[b].all == format[z])
			{
				printf("%s", comma);
				identifier[b].pfun(arguments);
				comma = ", ";
			}
			b++;
		}
		z++;
	}
	printf("\n");
	va_end(arguments);
}
