#include <stdio.h>

/**
 * main - Entry point
 * Description: 'Hexadecimal'
 * Return: Always 0 (Success)
*/

int main(void)
{

int i;
for (i = 0 ; i < 10  ; i++)
{
putchar(i + 48);
}
for (i = 0 ; i < 6 ; i++)
{
putchar(i + 97);
}
putchar('\n');
return (0);
}

