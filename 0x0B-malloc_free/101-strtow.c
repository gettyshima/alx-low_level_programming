#include "main.h"
#include <stdlib.h>

/**
  *count_word - count the number of words in a string
  *@str: the string
  *
  *Return: the number of words
  */

int count_word(char *str)
{
	int word_count = 0;

	while (*str != '\0')
	{
		/*skip space*/
		if (*str == ' ')
			str++;
		else
		{
			/*count the words looping through it*/
			while (*str != ' ' && *str)
				*str++;
			word_count++;
			/*increase the word_count after each loop*/
		}
	}
	return (word_count);
}

/**
  *word_len - count the length of each in the string
  *using the space(delimeter) to mark the end of the word
  *@str: the string containing the words
  *
  *Return: the word_len
  */

int word_len(char *str)
{
	int len = 0;
	int index = 0;

	/**
	  *stops counting when it encounters a delimeter
	  *and starts counting from begining when it sees a word
	  */
	while ((*(str + index)) && (*(str + index)) != ' ')
	{
		str++;
		len++;
	}
	return (len);
}

/**
  *strtow - splits string
  *@str: the string
  *
  *Return: pointer to array of the splited words
  */

char **strtow(char *str)
{
	char **ptr;
	int index = 0, words, letters, i, j;

	if (!str)
		return (NULL);
	words = count_word(str);
	if (word == 0)
		return (NULL);

	ptr = malloc(sizeof(char *) * (words + 1));
	if (!ptr)
		return (NULL);
	for (a = 0; a < words; a++)
	{
		while (str[index] == ' ')
			index++;
		letters = word_len(str + index);
		ptr[a] = malloc(sizeof(char) * (letters + 1));
		if (!ptr[a])
		{
			for (index -= 1; index >= 0; index--)
				free(ptr[index]);
			free(ptr);
			return (NULL);
		}
		for (l = 0; l < letters; l++)
		{
			ptr[a][l] = str[index];
			index++;
		}
		ptr[a][l] = '\0';
	}
	ptr[a] = NULL;
	ptr[a + 1] = NULL;
	return (ptr);
}
