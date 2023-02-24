#include "main.h"
/**
 * print_alphabet_x10 - 10 alphabets
 *
 * Return: x10 a-z
 */
void print_alphabet_x10(void)
{
int i = 0;
int j;

while (i < 10)
{
for (j = 'a'; j <= 'z'; j++)
{
_putchar(j);
}
i++;
_putchar('\n');
}
}
