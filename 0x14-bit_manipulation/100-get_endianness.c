#include "main.h"
/**
 * get_endianness - Checks the endiannes
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int numb = 1;
	char *byte = (char *)&numb;

	return ((int)byte[0]);
}
