#include "main.h"

/**
 * _isalpha - checks for alphabetic characters
 * letter Another cases, shows 0
 *
 * @c: the character in ASCII code
 *
 * Return: 1 for letters. 0 for the rest.
 */
int _isalpha(int c);/*local variable*/
{

if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
