#include <stdio.h>

int verificaNegativo(int n)
{
    if (n < 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int verificaPrimo(int n)
{
    int div = 1, qtd = 0;

    if (verificaNegativo(n))
    {
        n = n * (-1);
    }

    for (div = 1; div <= n; div++)
    {
        if (n % div == 0)
        {
            qtd++;
        }
    }

    if (qtd == 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int transformaPrimo(int n)
{
    int a = 0;

    if (verificaNegativo(n))
    {
        for (a = n - 1; a >= -32000; a--)
        {
            if (verificaPrimo(a))
            {
                return a;
            }
        }
    }
    else
    {
        for (a = n + 1; a <= 32000; a++)
        {
            if (verificaPrimo(a))
            {
                return a;
            }
        }
    }
}

int main()
{
    int l = 0, c = 0, a = 0, b = 0, n = 0, num = -1;

    scanf("%d %d", &l, &c);


    for (a = 1; a <= l; a++)
    {
        printf("	");

        for (b = 1; b <= c; b++)
        {
            scanf("%d", &n);

            if (verificaPrimo(n) || n > 31991 || n < -31991)
            {
                printf("%d ", n);
            }

            else
            {
                num = transformaPrimo(n);

                printf("%d ", num);
            }
        }
        printf("\n");
    }

    return 0;
}