#include "main.h"
/**
 * more_numbers - print more numbers
 */
void more_numbers(void)
{
int A, B;
for (A = 1; A <= 10; A++)
{
for (B = 0; B <= 14; B++)
{
if (B >= 10)
_putchar('1');
_putchar (B % 10 + '0');
}
_putchar('\n');
}
}
