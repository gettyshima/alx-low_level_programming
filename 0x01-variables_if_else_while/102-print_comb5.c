#include <stdio.h>
/**
  *main - prints all possible combination of two two digit
  *
  *Return: 0 (Success)
  */
int main(void)
{
	int i, j, k, l;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			for (k = 48; k < 58; k++)
			{
				for (l = 48; l < 58; l++)
				{
					if (i == k && j == l)
						continue;
					if (i == 57 && j == 57)
						continue;
					if (j != l)
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(k);
						putchar(l);
				if (i == 57 && j == 56 && k == 57 && l == 57)
					break;
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}


