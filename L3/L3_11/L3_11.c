#include <stdio.h>

int EhPar(int x)
{
    if ((x % 2) == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void PrintaPares(int N)
{
    int i = 2, loop = 0;

    while (loop < N)
    {
        if (EhPar(i))
        {
            printf("%d ", i);
            loop++;
        }
        i++;
    }
}
void PrintaImpares(int N)
{
    int i = 1, loop = 0;

    while (loop < N)
    {
        if (!EhPar(i))
        {
            printf("%d ", i);
            loop++;
        }
        i++;
    }
}

int main()
{
    int modo, N;

    scanf("%d %d", &modo, &N);

    if (modo)
    {
        PrintaImpares(N);
    }
    else
    {
        PrintaPares(N);
    }
}