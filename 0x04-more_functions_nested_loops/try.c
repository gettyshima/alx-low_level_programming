#include <stdio.h>

int pit(void)
{
	int i, j;

	i = 0;
	
	while (i <= 10)
	{
		for(j=0; j<= 14; j++)
		{
			/*if (j > 9)
			{
				pit(j/10);
				putchar(j%10 + '0');

			}	*/	
	putchar(j/10 + '0');
	putchar(j%10 + '0');
}
putchar('\n');
		
		i++;
}
}

int main(void)
{
	pit();
	return (0);
}
