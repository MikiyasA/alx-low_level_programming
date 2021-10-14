#include <stdio.h>

/**
 * main - print all arguments it recieved
 * @argc: No. of arguments
 * @argv: an array
 * Return: 0 value
 */

int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
