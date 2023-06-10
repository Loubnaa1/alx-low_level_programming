#include "main.h"
/**
 *_abs - function that computing the absolute value of an integer
 *@i: this the int that we will check
 *Return: -i (if negative) i (if positive)
 */
int _abs(int i)
{
	if (i < 0)
		return (-i);
	else
		return (i);
}
