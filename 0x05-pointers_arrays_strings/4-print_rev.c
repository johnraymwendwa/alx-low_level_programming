#include "main.h"
#include<stdio.h>
#include<string.h>
/*
*betty technicalities
*/void print_rev(char *s)
{
int i;
i = strlen(s);
while (i != 0)
{
_putchar(s[i]);
i--;
}
_putchar('\n');
}
