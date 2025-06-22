#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int fd1, fd2;
ssize_t file_write;
ssize_t file_read;
char buffer[1024];
file_read = 1;
if(argc != 3)
{
fprintf(stderr, "usage: cp file_from file_to\n");
exit(97);
}
fd1 = open(argv[1], O_RDONLY);
if (fd1 == -1)
{
fprintf(stderr, "Error: Can't read from file NAME_OF_THE_FILE\n");
exit(98);
}
fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC,0664);
if (fd2 == -1)
{
{
fprintf(stderr, "Error: Can't read from file NAME_OF_THE_FILE\n");
exit(98);
}
}
while((file_read = read(fd1,buffer,1024)) > 0)
{
file_write = write(fd2,buffer, file_read);
if (file_write == -1)
{
close(fd1);
close(fd2);
fprintf(stderr, "Error: Can't write to NAME_OF_THE_FILE\n");
exit(99);
}
}
if(file_read == -1)
{
close(fd1);
close(fd2);
fprintf(stderr, "Error: Can't read from file NAME_OF_THE_FILE\n");
exit(98);
}
close(fd1);
close(fd2);
return (0);
}

