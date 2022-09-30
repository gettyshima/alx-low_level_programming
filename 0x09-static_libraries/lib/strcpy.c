#include "main.h"

/**
  *_strcpy - copies the string pointes to by src, including the terminating
  *null byte(\0), to the buffer pointed to by dest
  *@dest: destination
  *@src: string to be copied
  *
  *Return: dest
  */

char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[len] = '\0'; /*the last character being null*/

	return (dest);
}

