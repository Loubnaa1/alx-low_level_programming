#include "3-calc.h"
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: vector of arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (atoi(argv[3]) == 0 && (argv[2][0] == '%' || argv[2][0] == '/'))
	{
		printf("Error\n");
		exit(100);
	}
	i = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", i);
	return (0);
}
