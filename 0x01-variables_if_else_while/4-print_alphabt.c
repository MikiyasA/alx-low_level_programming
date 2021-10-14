#include <stdio.h>

/**
 * main - print all alphabet execpt 'e' & 'q'
 * Description: using the main funtion
 * Return: 0 value
 */

int main(void)
{
char a;

for (a = 'a'; a <= 'z'; a++)
{
if (a != 'e' && a != 'q')
{
putchar (a);
}
}
putchar ('\n');

return (0);
}
