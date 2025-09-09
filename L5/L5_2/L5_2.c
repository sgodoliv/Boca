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

int main()
{
    int tam;

    scanf("%d", &tam);

    int notas[tam];
    IniciaVetor(notas, tam);
    LeVetor(notas, tam);

    if (tam == 1 || EhIgual(notas, tam))
    {
        printf("CRESCENTE&DECRESCENTE");
    }
    else if (EhOrdemCres(notas, tam))
    {
        printf("CRESCENTE");
    }
    else if (EhOrdemDescres(notas, tam))
    {
        printf("DECRESCENTE");
    }
    else
    {
        printf("DESORDENADO");
    }

    return 0;
}