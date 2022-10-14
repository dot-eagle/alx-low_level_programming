#include <stdio.h>
/**
 * main - printing single digit numbers
 * Description - single digit base 10 numbers
 * Return: 0 as success
 */

int main(void)
{
	int d = 0;

	while (d <= 9)
	{
		printf("%d", d);
		d++;
	}
	printf("\n");

	return (0);
}

