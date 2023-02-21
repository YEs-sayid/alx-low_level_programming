#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
int r;

print_last_ddigit(98);
print_last_ddigit(0);
r = print_last_ddigit(-1024);
_putchar('0' + r);
_putchar('\n');
return (0);
}
