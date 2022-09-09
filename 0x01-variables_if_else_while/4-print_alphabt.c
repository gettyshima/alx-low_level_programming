#include <stdio.h>
/**
  *main - prints alphabets in lowercase except q and e
  *
  *Return: 0 (success)
  */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; ++alpha)
	{
		if (alpha == 'e')
		{
			continue;
		}

		else if (alpha == 'q')
		{
			continue;
		}
		putchar(alpha);
	}

	putchar('\n');

	return (0);
}
