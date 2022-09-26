#include "main.h"
#include <stdio.h>

/**
  *_strpbrk - locates the first occurance in a string
  *@s: the string 
  *@accept: the string to be located
  *
  *Return: s
  */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}
	return (0);
}
	int main(void)

	{

		    char *s = "hello, world";

		        char *f = "world";

			    char *t;



			        t = _strpbrk(s, f);

				    printf("%s\n", t);

				        return (0);

	}
