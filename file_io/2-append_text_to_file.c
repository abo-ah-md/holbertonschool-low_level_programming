#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
*append_text_to_file - append a  text to the end of a file
*@text_content: string
*@filename: the relative path to a file
* Return: 1 on sucess otherwise -1
*/

int append_text_to_file(const char *filename, char *text_content)
{
int fd;
ssize_t file_write;
if (!filename)
return (-1);

fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);

if (!text_content)
{
close(fd);
return (1);
}
file_write = write(fd, text_content, strlen(text_content));
if (file_write == -1)
{
close(fd);
return (-1);
}
close(fd);
return (1);
}
