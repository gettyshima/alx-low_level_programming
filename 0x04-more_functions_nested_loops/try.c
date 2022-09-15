#include <stdio.h>


/**
* print_line - prints a line
* @n: no of lines
*
* Return: nothing
*/

/*void put(int n)
{
	int c;

	c = 0;
	while (c < n)
	{
		putchar(95);

		c++;
	}
	putchar(10);
}	*/


void put(int n)
{
        int i;

         //if (n <= 0)
           //      putchar('\n');
         for (i = 1; i <= n; i++)
         {
                 if (!(n <= 0))
                         putchar('_');
         
	 }
         putchar('\n');

}
int main(void)
{
	put(0);
	put(2);
	put(-61);
	put(5);
	put(0);
	put(0);

	return (0);
}
