#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always 0 on successful execution
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; 1 < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
