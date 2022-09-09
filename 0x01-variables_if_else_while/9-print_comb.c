#include <stdio.h>
/**
  *main - prints all combination of single separated with comma and space
  *
  *Return: 0 (success)
  */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);

		if (i == 57)
		{
			break;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
