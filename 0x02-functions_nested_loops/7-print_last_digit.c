#include "main.h"
/**
* print_last_digit - prints the sign of a number.
* @i: character to test.
* Return: Always 0.
*/
int print_last_digit(int i)
{
int m;

m = (i % 10);
if (m < 0)
{
m = m * -1;
}
_putchar(m + '0');
return (m);
}
