#include "holberton.h"


char *_strcat(char *dest, char *src);
int size; 

{
  size dest_len = strlen(dest);
  size i;

  for (i=0; i<n && src[i] != '\0'; i++)
    dest[dest_len + i]= src[i];
  dest[dest_len + i] = '\0';
  return dest;
}
