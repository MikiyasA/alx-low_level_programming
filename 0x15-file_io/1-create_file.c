#include "main.h"

/**
 * create_file - creates a file
 * @filename: file name
 * @text_content: content writed in the file
 * Return: 1 if success else -1
 */

int create_file(const char *filename, char *text_content)
{
int fd;
int lttrs;
int wr;

if (!filename)
return (-1);

fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

if (fd == -1)
return (-1);

if (!text_content)
text_content = "";

for (lttrs = 0; text_content[lttrs]; lttrs++)
;

wr = write(fd, text_content, lttrs);

if (wr == -1)
return (-1);

close(fd);

return (1);
}

