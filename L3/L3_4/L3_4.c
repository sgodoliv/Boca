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

void ImprimeMultiplos(int num, int max)
{
    int i = 0, qtd = 0;

    for (i = num + 1; i < max; i++)
    {
        if (i % num == 0)
        {
            printf("%d ", i);
            qtd++;
        }
    }

    if (qtd == 0)
    {
        printf("*");
    }

    printf("\n");
}

int main()
{
    int primo = 0, num = 0, min = 0, max = 0;

    scanf("%d %d", &min, &max);

    for (num = min + 1; num < max; num++)
    {
        primo = EhPrimo(num);

        if(primo) {
            printf("%d\n", num);
            ImprimeMultiplos(num, max);
        }
    }

    return 0;
}
