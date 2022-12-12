#include "main.h"
/**
  *_isalpha - checks for alphabetic character
  *@c: any character passed
  *
  *Return: 1 if c is lower or uppercase and 0 otherwise
  */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
		return (1);
	return (0);
}
