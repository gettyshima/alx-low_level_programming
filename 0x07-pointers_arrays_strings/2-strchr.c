#include "main.h"

/**
  *_strchr - locates character in a string
  *@s: the string
  *@c: the character to be located
  *
  *Return: pointer to the first occurance
  */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			s = s + i;
			break;
		}
	}
	return (s);
}
