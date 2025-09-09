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
void EhPA(int vetor[], int tam)
{
    int i = 0, razao = 0, sub = 0, controle = 0;

    if (tam == 1)
    {
        printf("NAO");
        return;
    }

    razao = vetor[1] - vetor[0];
    controle++;

    for (i = 2; i < tam; i++)
    {
        sub = vetor[i] - vetor[i - 1];
        if (sub == razao)
        {
            controle++;
        }
    }

    if (controle == (tam - 1))
    {
        printf("RESP:%d", razao);
    }
    else
    {
        printf("NAO");
    }
}

int main()
{
    int tam;
    scanf("%d", &tam);

    int vetor[tam];
    IniciaVetor(vetor, tam);
    LeVetor(vetor, tam);
    EhPA(vetor, tam);

    return 0;
}