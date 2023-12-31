#include <stdio.h>

/**
 * main - Prints the add of the Fibonacci numbers
 *
 * Description: prints the first 50 Fibonacci numbers,
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int i;
	long int a, b, c;

	a = 1;
	b = 2;
	printf("%ld, %ld", a, b);
	for (i = 0; i < 48; i++)
	{
		c = a + b;
		printf(", %ld", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}

