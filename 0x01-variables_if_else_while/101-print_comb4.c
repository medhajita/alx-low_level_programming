#include <stdio.h>

/**
 * main - Entry point
 * description: 'Do what you do better... and: do more of what you do...'
 * Return: Always 0 (Success)
*/

int main(void)
{

int i;
int j;
int z;
for (i = 0 ; i < 10  ; i++)
{
for (j = 0 ; j < 10  ; j++)
{
for (z = 0 ; z < 10  ; z++)
{
if (i != j  && i < j && j != z && j < z)
{
putchar(i + 48);
putchar(j + 48);
putchar(z + 48);
if (i + j != 17 && j + z != 34)
{
putchar(44);
putchar(32);
}
}
}
}
}
putchar('\n');
return (0);
}

