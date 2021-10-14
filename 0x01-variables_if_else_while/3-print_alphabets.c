#include <stdio.h>

/**
 * main - this code print all aphabet upter and lower
 * Description: using the main function
 * Return: o value
 */


int main(void)
{
char a, A;

for (a = 'a'; a <= 'z'; a++)
{
putchar (a);
}
for (A = 'A'; A <= 'Z'; A++)
{
putchar (A);
}
putchar ('\n');

return (0);
}
