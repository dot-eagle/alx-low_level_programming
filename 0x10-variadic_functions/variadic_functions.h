#ifndef _VARIADIC_FUNCTIONS_H
#define _VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <stdarg.h>

/**
 * struct print_ch - struct use to match operators
 * @ch: string representing the operator
 * @pfun: function pointer to the operation to be used
 */

typedef struct print_ch
{
	char ch;
	void (*pfun)(va_list arguments);
} symbol_t;

/* typedef struct type variable_type; */

void print_numbers(const char *separator, const unsigned int n, ...);
int sum_them_all(const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
int _putchar(char);
void print_all(const char * const format, ...);


void pr_int(va_list);
void pr_char(va_list);
void pr_float(va_list);
void pr_str(va_list);


#endif /* _VARIADIC_FUNCTIONS_H  */
