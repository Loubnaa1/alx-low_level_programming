#include "main.h"
/**
 * err_hand- printing error
 * @file: the file
 * @i: the value of error
 * Return: nothing
 */
void err_hand(char *file, int i)
{
	if (i == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		exit(98);
	}
	if (i == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
}
/**
 * close_f - function that print an error when the file fail to close
 * @f: value of the file descriptor
 * Return: nothing
 */
void close_f(int f)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f);
	exit(100);
}

/**
 * main - Copies the content of one file to another file.
 * @argc: The number of arguments.
 * @argv: An array of argument.
 * Return: 0 on success.
 */
int main(int argc, char **argv)
{
	int f1, f2;
	ssize_t fr, fw;
	char stock[1024];
	mode_t UGO = (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	f1 = open(argv[1], O_RDONLY);
	if (f1 == -1)
		err_hand(argv[1], 98);
	f2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, UGO);
	if (f2 == -1)
		err_hand(argv[2], 99);
	while ((fr = read(f1, stock, 1024)) != 0)
	{
		if (fr == -1)
			err_hand(argv[1], 98);
		fw = write(f2, stock, fr);
		if (fw == -1)
			err_hand(argv[2], 99);
	}
	if (close(f1) == -1)
		close_f(f1);
	close(f1);
	if (close(f2) == -1)
		close_f(f2);
	close(f2);
	return (0);
}
