#include <stdio.h>
#include <unistd.h>
/**
 *main - Entry Point
 *
 *Return: Always 1 (Success)
 */



int main(void)
{
int fd;
char Buff[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
fd = 1;
write(fd, Buff, 60);
return (1);
}
