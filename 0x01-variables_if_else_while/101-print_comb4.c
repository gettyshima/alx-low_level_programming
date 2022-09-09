#include <stdio.h>
/**
  *main - print combination of three digits
  *without repeating them
  *
  *Return: 0 (Success)
  */
int main(void)
{
	int i, j, k;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			for (k = 48; k < 58; k++)
			{
				if (i == j || j == k || k == i)
					continue;
				if (i != j && j != k && k != i && i < j && j < k && i < k && k > i && k > j)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i == 55 && j == 56 && k == 57)
						break;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
