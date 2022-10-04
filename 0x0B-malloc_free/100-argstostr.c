#include "main.h"
#include <stdlib.h>

/**
  *argstostr - concats all the argument passed
  *@ac: the number of argument
  *@av: the argument
  *
  *Return: Null on failure or if ac = 0 or av = NULL
  *a pointer to the new string (nstr)
  */

char *argstostr(int ac, char **av)
{
	int i, j;
	int k = 0, len = 0;
	char *nstr;

	if (ac == 0 || av == NULL)
		return (NULL);
	/**
	  *get the lenght of each argument passed
	  *we are treating it in a similar manner as a 2D array
	  *use the kenght to decided size of malloac
	  *concat the string
	  */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len += 1;
	}
	len += ac;
	nstr = (char *)malloc((1 + len )* sizeof(char));
	if (nstr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			nstr[k + i] = av[i][j];
			k++;
		}
		if (nstr[k + i] == '\0')
			nstr[k + i] = '\n';
	}
	return (nstr);
}
