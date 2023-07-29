#include<stdio.h>
#include "main.h"
/**
 * main - main function
 * @argc: number of arguments.
 * @argv: pointer to array of arguments.
 * Return: 1 if sucessed or -1 if failed.
 */
int main(int argc, char *argv[])
{
	printf("%i, %p\n", argc, (void *)*argv);
	system("readelf -a ubuntu64");
	return (1);
}
