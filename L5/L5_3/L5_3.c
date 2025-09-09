#include <stdio.h>
#include <math.h>

void IniciaVetor(int vetor[], int tam)
{
    int i = 0;

    for (i = 0; i < tam; i++)
    {
        vetor[i] = 0;
    }
}
void ImprimeVetor(int vetor[], int tam)
{
    int i = 0;

    for (i = 0; i < tam; i++)
    {
        printf("%d\n", vetor[i]);
    }
}
void LeVetor(int vetor[], int tam)
{
    int i = 0;

    for (i = 0; i < tam; i++)
    {
        scanf("%d", &vetor[i]);
    }
}
int EhOrdemCres(int vetor[], int tam)
{
    int i = 0;

    for (i = 1; i < tam; i++)
    {
        if (!(vetor[i - 1] < vetor[i] || vetor[i - 1] == vetor[i]))
        {
            return 0;
        }
    }

    return 1;
}
int EhOrdemDescres(int vetor[], int tam)
{
    int i = 0;

    for (i = 1; i < tam; i++)
    {
        if (!(vetor[i - 1] > vetor[i] || vetor[i - 1] == vetor[i]))
        {
            return 0;
        }
    }

    return 1;
}
int EhIgual(int vetor[], int tam)
{
    int i = 0;

    for (i = 1; i < tam; i++)
    {
        if (!(vetor[i - 1] == vetor[i]))
        {
            return 0;
        }
    }

    return 1;
}
void CalculaDiferenca(int vetor[], int tam)
{
    int dif = -1, i = 0, i1 = 0, i2 = 0;

    if (tam == 1)
    {
        printf("IMPOSSIVEL");
    }
    else
    {

        // maior diferenca
        for (i = 1; i < tam; i++)
        {
            if (vetor[i] > vetor[i - 1])
            {
                if ((vetor[i] - vetor[i - 1]) > dif)
                {
                    dif = vetor[i] - vetor[i - 1];
                }
            }
            else
            {
                if ((vetor[i - 1] - vetor[i]) > dif)
                {
                    dif = vetor[i - 1] - vetor[i];
                }
            }
        }

        // diferencas iguais a maior diferenca
        for (i = 1; i < tam; i++)
        {
            if (vetor[i] > vetor[i - 1])
            {
                if ((vetor[i] - vetor[i - 1]) == dif)
                {
                    i1 = i - 1;
                    i2 = i;
                    printf(" (%d %d)", i1, i2);
                }
            }
            else
            {
                if ((vetor[i - 1] - vetor[i]) == dif)
                {
                    i1 = i - 1;
                    i2 = i;
                    printf(" (%d %d)", i1, i2);
                }
            }
        }
    }
}

int main()
{
    int tam;
    scanf("%d", &tam);

    int alturas[tam];
    IniciaVetor(alturas, tam);
    LeVetor(alturas, tam);
    CalculaDiferenca(alturas, tam);

    return 0;
}