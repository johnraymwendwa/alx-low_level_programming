#include "main.h"
#include<stdio.h>
/*
*betty technicalities
*/void print_array(int *a, int n)
{
int i;
i = 0;
while (i != n)
{
printf("%d", a[i]);
printf(", ");
i++;
}
putchar('\n');
}
