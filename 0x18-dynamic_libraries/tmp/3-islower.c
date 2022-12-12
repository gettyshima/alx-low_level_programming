#include "main.h"
/**
  *_islower - checks if character is lower case or not
  *@c: any character passed
  *
  *Return: 1 if c is lowercase and 0 otherwise
  */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

