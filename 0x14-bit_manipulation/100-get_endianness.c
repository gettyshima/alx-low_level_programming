#include "main.h"

/**
 * get_endianness - gets endianness of machine
 *
 * Return: 1 if little endian, 0 if big endian
*/
int get_endianness(void)
{
	int i = 1;
	char *a = (char *)&i;

	if (*a)
		return (1);

	return (0);
}
