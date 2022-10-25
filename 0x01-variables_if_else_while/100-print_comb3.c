#include <stdio.h>

/**
 * main - print 00 to 99 with no duplicate digits or combos: no 11, no 10 (01)
 *
 * Return: 0
*/
int main(void)
{
	int ones;
	int tens;

	for (tens = 10; tens <= '9'; tens++) /*increment tens*/
	{
		for (ones = (tens + 1); ones <= '9' ones++) /*ones tens+1*/
		{
			putchar(tens);
			putchar(ones);

			if (tens != '8' || ones != '9') /*print commas*/
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
