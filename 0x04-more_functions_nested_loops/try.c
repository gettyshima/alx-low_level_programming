#include <stdio.h>

int put(int n)
{
	int i;
	 if (n <= 0)
			putchar('\n');

	for (i = 1; i <=n; i++)
	{
		if (!( n  <= 0))
			putchar(95);
			}
	return 0;
}

int main(void)
{
	put(0);
	put(2);
	put(-61);
	put(5);
	put(0);

	return (0);
}
