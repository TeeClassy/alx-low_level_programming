#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c:Ther character to print
 *
 * Return: On succcess 1
 * On error, -1 is returned and erno is set appropiately
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
