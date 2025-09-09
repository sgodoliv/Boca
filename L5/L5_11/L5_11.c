#include <stdio.h>
#include <math.h>

void IniciaVetorChar(char vetor[], int tam)
{
    int i = 0;

    for (i = 0; i < tam; i++)
    {
        vetor[i] = 'x';
    }
}
void IniciaVetorInt(int vetor[], int tam)
{
    int i = 0;

    for (i = 0; i < tam; i++)
    {
        vetor[i] = 0;
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
void OrdenaVetorInt(int vetor[], int tam)
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
void ImprimeVetorChar(char vetor[], int tam)
{
    int i = 0;
    for (i = 0; i < tam; i++)
    {
        printf("%c", vetor[i]);
    }
}
void ImprimeVetorInt(int vetor[], int tam)
{
    int i = 0;

    for (i = 0; i < tam; i++)
    {
        printf("%d ", vetor[i]);
    }
}
void OrdenaVetorAB(int junto[], char ab[], int tam3)
{
    int i, j, aux1;
    char aux2;

    for (i = 0; i < tam3; i++)
    {
        for (j = i + 1; j < tam3; j++)
        {
            if (!(junto[i] < junto[j]))
            {
                aux1 = junto[i];
                junto[i] = junto[j];
                junto[j] = aux1;

                aux2 = ab[i];
                ab[i] = ab[j];
                ab[j] = aux2;
            }
        }
    }
    for (j = 0; j < tam3; j++)
    {
        for (i = j+1; i < tam3; i++)
        {
            if (junto[j] == junto[i] && ab[j] == 'B' && ab[i] == 'A')
            {
                aux2 = ab[i];
                ab[i] = ab[j];
                ab[j] = aux2;
            }
        }
    }

    ImprimeVetorChar(ab, tam3);
}
void JuntaVetor(int a[], int b[], int tam1, int tam2)
{
    int i, j, tam3;
    tam3 = tam1 + tam2;
    int junto[tam3];
    char ab[tam3];

    for (i = 0; i < tam1; i++)
    {
        junto[i] = a[i];
        ab[i] = 'A';
    }
    for (j = 0; j < tam2; j++, i++)
    {
        junto[i] = b[j];
        ab[i] = 'B';
    }

    OrdenaVetorAB(junto, ab, tam3);
}

int main()
{
    int tam1;
    scanf("%d", &tam1);
    int a[tam1];
    IniciaVetorInt(a, tam1);
    LeVetor(a, tam1);

    int tam2;
    scanf("%d", &tam2);
    int b[tam2];
    IniciaVetorInt(b, tam2);
    LeVetor(b, tam2);
    OrdenaVetorInt(a, tam1);
    OrdenaVetorInt(b, tam2);
    JuntaVetor(a, b, tam1, tam2);

    return 0;
}