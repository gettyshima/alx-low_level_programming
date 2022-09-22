#include "main.h"

/**
  *rot13 - encodes a string using rot 13
  *@s: string to be encoded
  *
  *Return: s
  */

char *rot13(char *s)
{
	int i, j;
	char alp1[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char alp2[52] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == alp1[j])
			{
				s[i] = alp2[j];
				break;
			}
		}
	}
	return (s);
}
