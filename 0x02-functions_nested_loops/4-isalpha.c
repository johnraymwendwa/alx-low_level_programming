#include<stdio.h>
#include<main.h>
/*
*betty technicalities
*/int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
putchar('\n');
}