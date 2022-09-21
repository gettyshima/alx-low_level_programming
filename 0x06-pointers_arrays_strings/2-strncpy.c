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
	int len = 0, i;

	for (i = 0; src[i] != '\0'; i++)
	{
		len++;
	}
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	des[len] = '\0';
	return (dest);
}
