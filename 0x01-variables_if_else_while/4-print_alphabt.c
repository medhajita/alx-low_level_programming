#include <stdio.h>

/**
 * main - Entry point
 * description: 'I never thought that it would pay off'
 * Return: Always 0 (Success)
*/

int main(void)
{

int i;
for (i = 'a' ; i <= 'z' ; i++)
{
if (i != 'q' && i != 'e')
{
putchar(i);
}
}
putchar('\n');
return (0);
}

