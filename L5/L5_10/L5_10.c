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
void OrdenaVetor(int vetor[], int tam)
{
    int i = 0, j = 0, aux = 0;

    for (i = 0; i < tam; i++)
    {
        for (j = i + 1; j < tam; j++)
        {
            if (!(vetor[i] < vetor[j]))
            {
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
}

int main()
{
    int tam;
    scanf("%d", &tam);

    int vetor[tam];
    IniciaVetor(vetor, tam);
    LeVetor(vetor, tam);
    OrdenaVetor(vetor, tam);
    ImprimeVetor(vetor, tam);

    return 0;
}