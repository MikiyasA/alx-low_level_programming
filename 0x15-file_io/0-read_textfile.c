#include "main.h"

/**
 * read_textfile - read text file and print
 * @filename: file name
 * @letters: no. of letters to be printed
 * Return: letter
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t rd, wr;
char *buf;

if (!filename)
return (0);

if (filename == NULL)
return (0);

fd = open(filename, O_RDONLY);

buf = malloc(sizeof(char) * (letters));

if (!buf)
return (0);

rd = read(fd, buf, letters);
wr = write(STDOUT_FILENO, buf, rd);

close(fd);

free(buf);

return (wr);
}
