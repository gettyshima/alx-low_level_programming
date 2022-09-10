#include <stdio.h>
/**
  *main - print combination of four digits
  *
  *Return: 0 (success)
  */
int main(void)
{
	int i, j, k, l;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			for (k = j + 1; k< 10; k++)
			{
				for (l = k + 1; l< 10; l++)
				{
					putchar((i % 10) + '0');
					putchar((j % 10) + '0');
					putchar(' ');
					putchar((k % 10) + '0');
					putchar((l % 10) + '0');

					if (i == 9 && j == 8 && k == 9 && l == 9)
						continue;

					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
