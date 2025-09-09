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
int EhImpar(int num)
{

    if (num % 2 == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
void TrocaParEImpar(int vetor[], int tam)
{
    int i = 0, aux = 0, num = 0;

    for (i = 0; i < tam; i++)
    {
        num = i + 1;
        if (num >= tam)
        {
            break;
        }
        if (EhImpar(num))
        {
            aux = vetor[num];
            vetor[num] = vetor[i];
            vetor[i] = aux;
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
    TrocaParEImpar(vetor, tam);
    ImprimeVetor(vetor, tam);

    return 0;
}