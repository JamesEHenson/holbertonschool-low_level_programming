#include <holberton.h>

/**
 *_isupper- checks for uppercase characters
 *@c:c - variable
 *Return: 0
*/
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}
