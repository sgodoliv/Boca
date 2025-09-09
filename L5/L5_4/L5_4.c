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
int EstaDentro(int vetor[], int i, int a, int b)
{
    if (vetor[i] >= a && vetor[i] <= b)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void ImprimeResultado(int vetor[], int tam, int a, int b)
{
    int i = 0, qtd = 0, fora = 0;

    for (i = 0; i < tam; i++)
    {
        if (EstaDentro(vetor, i, a, b))
        {
            qtd++;
        }
    }

    fora = tam - qtd;

    printf("%d %d", qtd, fora);
}
int main()
{
    int tam, a, b;
    scanf("%d", &tam);

    int num[tam];
    IniciaVetor(num, tam);
    LeVetor(num, tam);
    scanf("%d %d", &a, &b);
    ImprimeResultado(num, tam, a, b);

    return 0;
}