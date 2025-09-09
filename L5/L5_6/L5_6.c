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
int ComparaVetor(int a[], int tam1, int b[], int tam2)
{
    int ia = 0, ib = 0, contador = 0;

    for (ia = 0; ia < tam1; ia++)
    {
        for (ib = 0; ib < tam2; ib++)
        {
            if (a[ia] == b[ib])
            {
                contador++;
                break;
            }
        }
    }

    return contador;
}
void ImprimeResultado(int a[], int tam1, int b[], int tam2)
{
    int contador;
    contador = ComparaVetor(a, tam1, b, tam2);

    if (contador == tam1)
    {
        printf("TODOS");
    }
    else if (contador == 0)
    {
        printf("NENHUM");
    }
    else
    {
        printf("PARCIAL");
    }
}

int main()
{
    int tam1, tam2;

    // vetor a
    scanf("%d", &tam1);
    int a[tam1];
    IniciaVetor(a, tam1);
    LeVetor(a, tam1);

    // vetor b
    scanf("%d", &tam2);
    int b[tam2];
    IniciaVetor(b, tam2);
    LeVetor(b, tam2);

    ImprimeResultado(a, tam1, b, tam2);

    return 0;
}