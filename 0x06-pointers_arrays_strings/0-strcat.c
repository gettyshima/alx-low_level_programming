#include "main.h"

/**
  *_strcat - cincatenates two strings
  *@dest: the sting that is being added to
  *@src: the string to be appended
  *
  *Return: pointer to the result
  */

char *_strcat(char *dest, char *src)
{
	int len1 = 0, len2 = 0, i = 0;

	while (dest[i] != '\0')
	{
		len1++;
	}
	i = 0;

	while (src[i] != '\0')
	{
		len2++;
	}

	for (i = 0; i <= len2; i++)
		dest[len1 + i] = src[i];
	return (dest);
}


