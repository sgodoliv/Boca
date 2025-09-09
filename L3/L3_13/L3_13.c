#include <stdio.h>

int CalculaValorPalavra()
{
    char letra = '\0';
    int soma = 0;

    while (1)
    {
        letra = getchar();

        if (letra == '\n')
        {
            break;
        }

        if (letra >= 'a' && letra <= 'z')
        {
            soma = soma + ((int)letra - 96);
        }
        else if (letra >= 'A' && letra <= 'Z')
        {
            soma = soma + ((int)letra - 38);
        }
        else
        {
            soma = 0;
            break;
        }
    }

    return soma;
}

int EhPrimo(int n)
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
        return 1;
    }
    else
    {
        return 0;
    }
}

int ProximoPrimo(int n)
{

    while (!EhPrimo(n))
    {
        n = n + 1;
    }

    return n;
}

int main()
{
    int n = 1, prox = 0;
    char letra;

    while (1)
    {
        n = CalculaValorPalavra();

        if (n == 0)
        {
            break;
        }

        if (EhPrimo(n))
        {
            printf("E primo\n");
        }
        else
        {
            prox = ProximoPrimo(n);
            printf("Nao e primo %d\n", prox);
        }
    }

    return 0;
}