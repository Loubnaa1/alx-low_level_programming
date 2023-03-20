#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int i;
        char Num[] = "0123456789";

        for (i = 0; i < 10; i++)
        {
                putchar(Num[i]);
        }
        putchar('\n');
        return (0);
}
