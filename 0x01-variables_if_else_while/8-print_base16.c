#include <stdio.h>

/**
 * main - prints all hexadecimal character
 * Description: using the main function
 * Return: 0 value
 */

int main(void)
{

int i, a;

for (i = 0; i < 10; i++)
{
putchar ((i % 10) + '0');
}

for (a = 'a'; a < 'g'; a++)
{
putchar (a);
}
putchar ('\n');

return (0);
}
