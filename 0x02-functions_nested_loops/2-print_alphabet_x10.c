#include "main.h"
/*
*betty technicalities
*/void printalpha(void)
{
int i;
i = 97;
while (i != 123)
{
_putchar(i);
i++;
}
_putchar('\n');
}
/*
*betty technicalities
*/void print_alphabet_x10(void)
{
int k;
k = 0;
while (k != 10)
{
printalpha();
k++;
}
}
