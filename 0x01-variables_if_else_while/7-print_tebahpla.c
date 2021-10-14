#include <stdio.h>

/**
 * main - print alphabet in reverse mode
 * Discription: using the main function
 * Return: 0 value
 */

int main(void)
{
char a;

for (a = 'z'; a >= 'a'; a--)
{
putchar (a);
}
putchar ('\n');

return (0);

}
