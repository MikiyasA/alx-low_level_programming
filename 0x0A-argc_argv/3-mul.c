#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiple two No.s
 * @argc: No. of command line
 * @argv: an array
 * Return: 0 value
 */

int main(int argc, char *argv[])
{

if (argc != 3)
{
printf("Error\n");
return (1);
}
else
{
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
}
return (0);
}
