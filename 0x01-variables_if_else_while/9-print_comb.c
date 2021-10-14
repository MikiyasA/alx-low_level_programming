#include <stdio.h>

/**
 * main - print all posible comb of single digit
 * Desption: using the main function
 * Return: 0 value
 */

int main(void)
{

int i;

for (i = 0; i < 10; i++)
{
putchar ((i % 10) + '0');
if (i != 9)
{
putchar (',');
putchar (' ');
}
}
putchar ('\n');
return (0);
}
