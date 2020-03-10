#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * _strcpy - writes the character c to stdout
 * @dest: The character to print
 * @src: kkdfkdkfdk
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strcpy(char *dest, char *src)
{

int a = 0;

while (src[a] != '\0')
{
dest[a] = src[a];
a++;
}
dest[a] = '\0';
return (dest);
}
/**
 * _strlen ---acter c to stdout
 * @s: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _strlen(char *s)
{
int a;
while (s[a] != '\0')
{
a++;
}
return (a);
}
/**
 * dog_t *new_dog ---new_dog
 * @name: name to copy
 * @age: age of dog
 * @owner: th owner
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
int lename, lenowner;
char *name2, *owner2;

dog_t *x;

lename = _strlen(name);
lenowner = _strlen(owner);
name2 = malloc(lename + 1);
if (name2 == NULL)
{
return (NULL);
}
owner2 = malloc(lenowner + 1);
if (owner2 == NULL)
{
free(name2);
return (NULL);
}
_strcpy(name2, name);
_strcpy(owner2, owner);

x = malloc(sizeof(struct dog));
if (x == NULL)
{
free(name2);
free(owner2);
return (NULL);
}
x->name = name2;
x->age = age;
x->owner = owner2;
return (x);

}
