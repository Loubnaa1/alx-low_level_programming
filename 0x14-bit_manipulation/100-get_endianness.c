#include "main.h"
/**
 * get_endianness - This function checks the endiannes.
 * Return: 0 if the system
 * is big endian, 1 if it is little endian.
 */
int get_endianness(void)
{
	unsigned int numb = 1;
	char *p = (char *)&numb;

	if (*p == 1)
		return (1);
	else
		return (0);
}
