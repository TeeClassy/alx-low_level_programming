#include <stdio.h>

/**
 * main - print the alphabet in lowercase, then in uppercase
 *
 * Return: 0
*/
int main(void)
{
	char letters;

	for (letter = 'a'; letter <= 'z'; letter++)
	putchar(letter);

	for (letter = 'A'; letter <= 'Z'; letter++)
	putchar(letter);

	putchar('\n');
	return (0);
}
