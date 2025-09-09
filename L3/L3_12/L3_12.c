#include <stdio.h>

int somadosdigitos(int n)
{
    int num = 0, soma = 0;

    while (n != 0)
    {
        num = n % 10;
        n = n / 10;
        soma = soma + num;
    }

    return soma;
}

void parImpar(int n)
{
    if ((n % 2) == 0)
    {
        printf("Par ");
    }
    else
    {
        printf("Impar ");
    }
}

void valorPrimo(int n)
{
    int i, qtd = 0;

    for (i = 1; i <= n; i++)
    {
        if ((n % i) == 0)
        {
            qtd++;
        }
    }

    if (qtd == 2)
    {
        printf("Primo");
    }
    else
    {
        printf("Nao e primo");
    }
}

int main()
{
    int n;

    scanf("%d", &n);

    do
    {
        n = somadosdigitos(n);
        printf("%d ", n);
        parImpar(n);
        valorPrimo(n);
        printf("\n");
    } while (n >= 10);

    return 0;
}