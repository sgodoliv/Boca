#include <stdio.h>

int EhPrimo(int num)
{
    int i = 0, qtd = 0;

    for (i = 1; i <= num; i++)
    {

        if (num % i == 0)
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

int main()
{
    int n = 0, m = 0, num = 0, result = 0;

    scanf("%d %d", &n, &m);

    for (num = n + 1; num < m; num++)
    {
        result = EhPrimo(num);

        if (result)
        {
            printf("%d ", num);
        }
    }

    return 0;
}