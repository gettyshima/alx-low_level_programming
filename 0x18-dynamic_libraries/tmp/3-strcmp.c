#include "main.h"

/**
  *_strcmp - compares two strings
  *@s1: first string to ne compared
  *@s2: second string to ne compared
  *
  *Return: 0 if both dtrings are thesame
  *positive differnce if s1 is greater than s2
  *negative digerence is s2 is greater than s1
  */
int _strcmp(char *s1, char *s2)
{
	int i, diff = 0;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			diff = s1[i] - s2[i];
			break;
			return (diff);
		}
		else if (s1[i] == s2[i])
			diff = 0;
	}
	return (diff);
}
