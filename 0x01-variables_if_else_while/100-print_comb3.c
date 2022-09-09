#include <stdio.h>
/**
  *main - print all possible combinatikn of two digits
  * without repeating, i.e 01, 10
  *
  *Return: 0 (success)
  */
int main(void)
{
	int i;
	int j;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			if (i != j && i < j)
			{
				putchar(i);
				putchar(j);
				if (i == 56 && j == 57)
				break;
			putchar(',');
			putchar(' ');
			}

		}
	}

	putchar('\n');
	return (0);
}


