#include "main.h"

/**
  *_strncpy - copies a sting to another to the nth
  *@dest: destination
  *@src: string to be copied
  *@n: the terminating number
  *
  *Return: dest
  */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
