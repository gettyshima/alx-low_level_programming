#include "main.h"
#include <stdlib.h>

/**
  *_strlen - find string length
  *@s: the string
  *
  *Return: length of the string
  */

unsigned int _strlen(char *s)
{
	unsigned int i, len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len += 1;
	}
	return (len);
}

/**
  *string_nconcat - concatenate two strings till the nth byte
  *@s1: first string
  *@s2: second string
  *@n: the nth byte
  *
  *Return: a pointer to the newstring
  *null on failure
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	unsigned int len1 = 0, len2 = 0;
	char *nstr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	if (n >= len2)
	{
		nstr = malloc((1 + len1 + len2) * sizeof(char));
		if (nstr == NULL)
			return (NULL);
		for (i = 0; i < len1; i++)
		{
			nstr[i] = s1[i];
		}
		for (j = 0; j < len2; j++)
		{
			nstr[i + j] = s2[j];
		}
	}
	else
	{
		nstr = malloc((1 + len1 + n) * sizeof(char));
		if (nstr == NULL)
			return (NULL);
		for (i = 0; i < len1; i++)
		{
			nstr[i] = s1[i];
		}
		for (j = 0; j < n; j++)
		{
			nstr[i + j] = s2[j];
		}
	}
	return (nstr);
}
