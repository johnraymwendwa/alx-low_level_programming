#include "main.h"
#include <stdlib.h>
#include <string.h>
/*
*betty technicalities
*/char *_strdup(char *str)
{
int i, j;
char *result;

if (str == NULL)
{
return (NULL);
}

result = malloc(strlen(str) * sizeof(char));
j = strlen(str);
for (i = 0; i < j; i++)
{
result[i] = str[i];
}
if (result[i - 1] == str[i - 1])
{
return (result);
}
else
{
return (NULL);
}


}
