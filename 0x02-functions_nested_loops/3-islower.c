#include "main.h"
/**
* _islower - check for lower case.
* @c: character to test.
* Return: Always 0.
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
