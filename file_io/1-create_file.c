#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
*create_file - craete a file with text
*@text_content: string
*@filename: the relative path to a file
* Return: 1 on sucess otherwise -1
*/

int create_file(const char *filename, char *text_content)
{
int fd;
ssize_t file_write;
if (!filename || !text_content)
return (-1);

fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
if (fd == -1)
return (-1);

file_write = write(fd, text_content, strlen(text_content));
if (file_write == -1)
{
close(fd);
return (-1);
}
close(fd);
return (1);
}
