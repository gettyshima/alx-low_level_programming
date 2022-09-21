#include "main.h"

/**
  *cap_string - capitalize all words of a string
  *@s: string to be converted
  *
  *Return: s
  */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[0] >= 'a' && s[0] <= 'z')
		{
			s[0] = s[0] - 32;
		}
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ',' || s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?' || s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
		{
			++i;
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - 32;
		}
	}
	return (s);
}

