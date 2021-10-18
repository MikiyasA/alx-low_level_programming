#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file name
 * @text_content: added content
 * Return: 1 if file exist -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
int fd;
int lttrs;
int wr;

if (!filename)
return (-1);

fd = open(filename, O_WRONLY | O_APPEND);

if (fd == -1)
return (-1);

if (text_content)
{
for (lttrs = 0; text_content[lttrs]; lttrs++)
;

wr = write(fd, text_content, lttrs);

if (wr == -1)
return (-1);
}

close(fd);

return (1);
}
