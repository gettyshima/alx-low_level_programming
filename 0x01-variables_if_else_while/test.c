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
				if (((l == k) > (i == j) && l >= i) || i < l)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (i + j + l + k == 227 && i == 57)
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

