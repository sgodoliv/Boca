#include <stdio.h>

int EhPalindromo(int num)
{
    int inverso = 0, div = 0, resto = 0;

    div = num;

    while (div > 0)
    {

        resto = div % 10;
        div = div / 10;

        inverso = inverso * 10 + resto;
    }

    if (inverso == num)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int num = 0;

    while (scanf("%d", &num) == 1)
    {
        if (EhPalindromo(num))
        {
            printf("S\n");
        }
        else
        {
            printf("N\n");
        }
    }

    return 0;
}