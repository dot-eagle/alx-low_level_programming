#include "main.h"

/**
 * _fill_mem_byte - fills memory with a constant byte
 * @s: input pointer to memory block
 * @b: characters to s@et
 * @n: size of bytes to be filled
 *
 * Return: pointer to the filled memory area
 */

char *_fill_mem_byte(char *s, char b, unsigned int n)
{
	unsigned int h = 0;

	for (h = 0; h < n; h++)
	{
		*(s + h) = b;
	}
	return (s);
}

/**
 * _calloc - function that allocates memory
 * @nmemb: size of array
 * @size: size of each element
 *
 * Return: pointer to new allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *sr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	sr = malloc(nmemb * size);
	if (sr == NULL)
		return (NULL);

	_fill_mem_byte(sr, 0, nmemb * size);

	return (sr);
}

/**
 * _length - counts lenght
 * @s: string
 *
 * Return: 0
 */

_length(char s);

/**
 * mul - initialize array with 0 byte
 * @s1: first string
 * @s2: second string
 *
 * Return: void
 */

void mul(char *s1, char *s2)
{
	int i, l1, l2, total_l, f_digit, s_digit, res = 0, tmp;
	char *ptr;
	void *temp;

	l1 = _length(s1);
	l2 = _length(s2);
	tmp = l2;
	total_l = l1 + l2;
	ptr = _calloc(sizeof(int), total_l);

	/* store our pointer in a temp address to be later freed */
	temp = ptr;

	for (l1--; l1 >= 0; l1--)
	{
		f_digit = s1[l1] - '0';
		res = 0;
		l2 = tmp;

		for (l2--; l2 >= 0; l2--)
		{
			s_digit = s2[l2] - '0';
			res += ptr[l2 + l1 + 1] + (f_digit * s_digit);
			ptr[l1 + l2 + 1] = res % 10;
			res /= 10;
		}
		if (res)
			ptr[l1 + l2 + 1] = res % 10;
	}

	while (*ptr == 0)
	{
		ptr++;
		total_l--;
	}

	for (i = 0; i < total_l; i++)
		printf("%i", ptr[i]);
	printf("\n");
	free(temp);
}

/**
 * check_number - check
 * @num: num
 *
 * Return: 0
 */

check_number(int num);

/**
 * main - Entry point
 * desc: multiplies two positive numbers
 * @argc: number of arguments
 * @argv: arguments array
 *
 * Return: 0 as success else 98 at exit
 */

int main(int argc, char *argv[])
{
	char *num1 = argv[1];
	char *num2 = argv[2];

	if (argc != 3 || check_number(num1) || check_number(num2))
		exit(98);

	if (*num1 == '0' || *num2 == '0')
	{
		_putchar('0');
		_putchar('\n');
	}
	else
		mul(num1, num2);
	return (0);
}
