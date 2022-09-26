#include "main.h"
#include <stdio.h>

/**
  *_strstr - finds first occurance of a substring in a string
  *@haystack: the string
  *@needle: the substring
  *
  *Return: a pointer to the begining of the substring
  */
/*
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	while (*haystack != '\0')
	{
		haystack++;

	return (0);
}


#include "main.h"
#include <stdio.h>
*/
/**
 * *_strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to look for
 *
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (!needle[j])
			return (&haystack[i]);
	}
	return (0);
}
/*
   #include "main.h"


char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *need = needle;
		char *hay = haystack;

		while (*need != '\0' && *hay == *need)
		{
			hay++;
			need++;
		}

		if (*need == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}

*/
int main(void)
{
    char *s = "hello, world";
    char *f = "held";
    char *t;

    t = _strstr(s, f);
    printf("%s\n", t);
    return (0);
}
