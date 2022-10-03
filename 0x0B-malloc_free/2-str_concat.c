#include "main.h"
#include <stdlib.h>

/**
  *str_concat - concatenates two strings and store in a pointer rerurn
  *@s1: first string
  *@s2: second strin
  *
  *Return: NULL on failure
  *A pointer to the concatenated string
  */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j;
	unsigned int len1 = 0, len2 = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		len1 += 1;
	for (i = 0; s2[i] != '\0'; i++)
		len2 += 1;
	str = (char *)malloc((1 + len1 + len2) * sizeof(char));
	if (str == NULL)
		return (NULL);
	for (j = 0; j < len1; j++)
	{
		str[j] = s1[j];
	}
	for (i = 0; i < len2; i++)
	{
		str[j + i] = s2[i];
	}
	return (str);
}
