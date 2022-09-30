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
	for (; *haystack != '\0'; haystack++)
	{
		char *need = needle;
		char *hay = haystack;

		while (*need != '\0' && *hay == *need)
		{
			hay++;
			need++;
		}

		if (*need == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}
