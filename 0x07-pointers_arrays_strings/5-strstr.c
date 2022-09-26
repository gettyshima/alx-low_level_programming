#include "main.h"

/**
  *_strstr - finds first occurance of a substring in a string
  *@haystack: the string
  *@needle: the substring
  *
  *Return: a pointer to the begining of the substring
  */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (j = 0; needle[j] != '\0'; j++)
	{
		for (i = 0; haystack[i] != '\0'; i++)
		{
			if (needle[j] == haystack[i] && needle[j] != '\0')
				return (&haystack[i]);
		}
	}
	return (0);
}
