#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char alphabet[] = "zyxwvutsrqponmlkjihgfedcba";

	for (i = 0; i < 26; i++)
	{
		putchar(alphabet[i]);
	}
	putchar('\n');
	return (0);
}
