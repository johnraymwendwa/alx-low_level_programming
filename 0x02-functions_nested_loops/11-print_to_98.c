#include "main.h"
#include<stdio.h>
/*
*betty technicalities
*/void print_to_98(int n)
{
if (n < 98)
{
while (n <= 98)
{
if (n < 10)
{
if (n > -1)
{
_putchar(n+'0');
}
else if (n < 0)
{
if ( n < -99)
{
_putchar((n / 100)+ '0');
_putchar(((n % 100)/ 10)+ '0');
_putchar(((n % 100) % 10)+ '0');
}
else if (n > -100)
{
int q,w;
q = n / 100;
w = n % 10;
printf("%d", q);
printf("%d", w);
}
}
}
else if (n > 9)
{
_putchar((n / 10)+ '0' );
_putchar((n % 10)+ '0' );
}
if (n != 98)
{
_putchar(',');
_putchar(' ');
}
n++;
}
}

else if (n > 98)
{
while (n >= 98)
{
if ( n > 99)
{
_putchar((n / 100)+ '0');
_putchar(((n % 100)/ 10)+ '0');
_putchar(((n % 100) % 10)+ '0');
}
else if (n < 100)
{
_putchar((n / 10)+ '0' );
_putchar((n % 10)+ '0' );
}
if (n != 98)
{
_putchar(',');
_putchar(' ');
}
n--;
}
}
else
{
_putchar('9');
_putchar('8');
}
_putchar('\n');
}
