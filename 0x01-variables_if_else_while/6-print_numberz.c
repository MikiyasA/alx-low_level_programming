#include <stdio.h>

/**
 * main - print numbers using putchar
 * Description: using the main function
 * Return: 0 value
 */

int main(void)
{
int i;

for (i = 0; i < 10; i++)
{
putchar((i % 10) + '0');
}
putchar ('\n');
return (0);
}
