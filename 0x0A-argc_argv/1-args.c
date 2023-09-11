#include <stdio.h>
#include "main.h"

/**
 * Main - print the number of arguments passed to the program
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0 on successful completion
 */

int main(int argc, char *argv[])
{
	(void)argv; /*ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
