#include<stdio.h>
/*
*betty technicalities
*/#include<stdio.h>
/*
*betty technicalities
*/void times_table(void)
{
int a, b;
int d;
for (a = 0; a < 10; a++)
{
for (b = 0; b < 10; b++)
{
d = a * b;
printf("%d", d);
printf(", ");
}
putchar('\n');
}
}
