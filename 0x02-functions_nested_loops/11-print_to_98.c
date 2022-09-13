#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - prints natural numbers from n to 98
 *@n: any number passes
 *
 *Return: 0 (success)
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		printf("%d, ", i);
		if (i == 98)
			printf("98\n");
		return (0);
	}
}
