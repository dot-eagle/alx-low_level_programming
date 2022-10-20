#include "main.h"

/**
 * main - print out numbers from 1 to 100 with logic
 * Description
 *
 * Return: FizzBuzz
 *
 */

int main(void)
{
	int e;

	for (e = 1; e <= 100; e++)
	{
		if (e % 15 == 0)
			printf("FizzBuzz");
		else if (e % 3 == 0)
			printf("Fizz");
		else if (e % 5 == 0)
			printf("Buzz");
		else
			printf("%i", e);
		if (e < 100)
			printf(" ");
	}
	printf("\n");

	return (0);
}
