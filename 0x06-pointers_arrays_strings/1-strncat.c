#include "main.h"

/**
  *_strncat - cincatenates two strings to the nth
  *@dest: the sting that is being added to
  *@src: the string to be appended
  *@n: the terminating number
  *
  *Return: pointer to the result
  */

char *_strncat(char *dest, char *src, int n)
{
	int len1 = 0, i = 0;

	while (dest[i] != '\0')
	{
		len1++;
	}

	for (i = 0; i < n; i++)
		dest[len1 + i] = src[i];
	return (dest);
}


