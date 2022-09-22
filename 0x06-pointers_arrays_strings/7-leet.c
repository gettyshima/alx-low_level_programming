#include "main.h"

/**
  *leet - encodes a string to 1337
  *@s: string to be encoded
  *
  *Return: s
  */

char *leet(char *s)
{
	int i, j;
	char upper[5] = "AEOTL";
	char lower[5] = "aeotl";
	char nums[5] = "43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == upper[j] || s[i] == lower[j])
				s[i] = nums[j];
		}
	}
	return (s);
}

