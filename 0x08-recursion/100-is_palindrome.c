#include "main.h"

/**
  *_strlen - finds the lenght of thd string
  *@s: the string
  *
  *Return: the lenght
  */

int _strlen(char *s)
{
	int len = 0;

	if (*s)
	{
		len += 1;
		return (len += 1 * _strlen(s + 1));
	}

	return (0);
}

/**
  *_string_checker - checks if the strings are thesame starting from
  *the beginning and the end of the string simultaneously
  *@n: lenght of string
  *@i: index used to increment pointer
  *@s: the string
  *
  *Return: 0 if it not a palindrome and 1 otherwise
  */

int _string_checker(char *s, int n, int i)
{
	if (*(s + i) != *(s + (n - 1)))
		return (0);
	if (i >= n)
		return (1);
	return (_string_checker(s, n - 1, i + 1));
}

/**
  *is_palindrome - checks if a string is palindrome
  *@s: the string
  *Return: 0 if it is and 1 otherwise
  */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (_string_checker(s, _strlen(s), 0));
}
