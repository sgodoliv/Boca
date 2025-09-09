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

    printf("{");
    for (i = 0; i < tam; i++)
    {
        printf("%d", vetor[i]);

        if (!(i == (tam - 1)))
        {
            printf(", ");
        }
    }
    printf("}");
}
void LeVetor(int vetor[], int tam)
{
    int i = 0;

    for (i = 0; i < tam; i++)
    {
        scanf("%d", &vetor[i]);
    }
}
void InverteVetor(int vetor[], int tam)
{
    int i = 0, j = 1, inverso[tam];

    IniciaVetor(inverso, tam);

    for (i = 0; i < tam; i++, j++)
    {
        inverso[tam - j] = vetor[i];
    }

    ImprimeVetor(inverso, tam);
}

int main()
{
    int tam;
    scanf("%d", &tam);

    int vetor[tam];
    IniciaVetor(vetor, tam);
    LeVetor(vetor, tam);
    InverteVetor(vetor, tam);

    return 0;
}