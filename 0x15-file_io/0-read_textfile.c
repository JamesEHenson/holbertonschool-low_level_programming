#include "holberton.h"
/**
 * read_textfile - reads a text file
 * @filename: file to read
 * @letters: number of letters it should read
 * Return: actual numbers it could read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fp, cl, num, counter;
char *buffer;

if (filename == NULL)
return (0);
  
buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
return (0);

fp = open(filename, O_RDWR);
if (fp == -1)
{
free(buffer);
return (0);
}
counter = read(fp, buffer, letters);
num = write(STDOUT_FILENO, buffer, (ssize_t)counter);
if (num == -1)
{
free(buffer);
return (0);
}
if (counter != num)
return (0);
free(buffer);
cl = close(fp);
if (cl == -1)
return (0);
return (num);
}
