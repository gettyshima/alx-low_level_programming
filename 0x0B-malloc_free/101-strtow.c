#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int *size(char *string, char *seperators, int *count)
{
	int len = strlen(string), i, old_i;

	*count = 0;
	i = 0;
	while (i < len)
	{
		while (i < len)
		{
			if (strchr(seperators, string[i]) == NULL)
				break;
			i++;
		}
		old_i = i;
		while (i < len)
		{
			if (strchr(seperators, string[i]) != NULL)
				break;
			i++;
		}
		if (i > old_i)
			*count = *count + 1;
	}
	return (count);
}

/**
  *strtow - splits string
  *@str: the string
  *
  *Return: a pointer to the new split string
  *null on failure
  */

char **strtow(char *str)
{
	int count_strings = 0, i = 0, string_index, len = strlen(str);
	int *counting, j = 0, to_allocate;
	char **strings, buffer[16384];

/*	if (str == NULL || str == "")
	{
		return (NULL);
	}
	*/
	counting = size(str, " ", &count_strings);
	strings = malloc(sizeof(char *) * *counting);
	if (strings == NULL)
		{
			for (i = 0; i < count_strings; i++)
				free(strings[i]);
			return(NULL);
		}

	while (i < len)
	{
		while (i < len)
		{
			if (strchr(" ", str[i]) == NULL)
				break;
			i++;
		}
		while (i < len)
		{
			if (strchr(" ", str[i]) != NULL)
				break;
			buffer[j] = str[i];
			i++;
			j++;
		}
	
		if (j > 0)
		{
			buffer[j] = '\0';
			to_allocate = sizeof(char) * (strlen(buffer) + 1);
			strings[string_index] = malloc(to_allocate);
			strcpy(strings[string_index], buffer);
			string_index++;

		}

	strings[string_index] = NULL;
	}
	return (strings);
}
