#include <stdio.h>
#include <stdlib.h>

int ComparaString(char *str1, char *str2)
{
    int i = 0;

    while (1)
    {
        if (!(str1[i] == str2[i]) || ((str2[i] == '\0') && (str1[i] != '\0')) || ((str1[i] == '\0') && (str2[i] != '\0')))
        {
            return 0;
        }
        else if ((str2[i] == '\0') && (str1[i] == '\0'))
        {
            return 1;
        }
        i++;
    }
}

int main()
{
    char str1[1000];
    char str2[1000];

    while (scanf("%s", str1) == 1 && scanf("%s", str2) == 1)
    {
        if (ComparaString(str1, str2))
        {
            printf("IGUAL\n");
        }
        else
        {
            printf("DIFERENTE\n");
        }
    }

    return 0;
}