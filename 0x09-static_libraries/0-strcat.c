#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings.
 * @dest: destination
 * @src: source
 *
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
  int i = 0;
  int j = 0;


  for (i = 0; dest[i] != '\0'; ++i)
    {
    }
  for (j = 0; src[j] != '\0'; ++j, i++)
    dest[i] = src[j];

  dest[i] = '\0';

  return (dest);
}
