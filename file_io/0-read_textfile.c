#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
*read_textfile - read files with number
*of letters it should read and print
*@letters: the number of letters it should read and print
* Return:  actual number of letters it could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
char *buffer;
int fd;
int file_read;
int file_write;
if(!filename)
return (0);
fd = open(filename,O_RDONLY);
if(fd == -1)
return (0);
buffer = malloc(letters + 1);
if(!buffer)
return (0);
file_read = read(fd,buffer,letters);
if(file_read == -1)
{
free(buffer);
close(fd);
return (0);
}
file_write = write(STDOUT_FILENO,buffer,file_read);
if(file_write == -1)
{
free(buffer);
close(fd);
return (0);
}
free(buffer);
close(fd);
return (file_write);
}
