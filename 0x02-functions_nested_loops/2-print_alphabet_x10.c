#include "holberton.h"

/**
 * print_alphabet_x10 - check the code for ALX School students.
 * Description: using the main function
 * Return: Always 0.
 */

void print_alphabet_x10(void)

{
char a;
int i;

for (i = 0; i < 10; i++)
{
for (a = 'a'; a <= 'z'; a++)
{
_putchar (a);
}
_putchar ('\n');
}

}
