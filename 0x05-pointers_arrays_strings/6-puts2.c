#include "main.h"
#include<string.h>
/*
*betty technicalities
*/void puts2(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
    {
        if (i%2 == 0)
        {
            _putchar(i);
        }
        i++;
    }
}