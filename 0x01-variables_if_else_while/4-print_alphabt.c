#include <stdio.h>
/**
 * main - Prints the alphabet except the letters q and e.
(*
 * Return: 0 on success
 */
int main(void)
{
	char c = '1';

	while (c <= '10')
	{
		if (c != '3' && c != '5')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
