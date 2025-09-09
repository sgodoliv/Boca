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
int EncontraX(int vetor[], int tam, int num_x)
{
    int i;

    for (i = 0; i < tam; i++)
    {
        if (vetor[i] == num_x)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int tam, num_x, result;
    scanf("%d %d", &num_x, &tam);

    int num[tam];
    IniciaVetor(num, tam);
    LeVetor(num, tam);
    result = EncontraX(num, tam, num_x);

    if (result == -1)
    {
        printf("RESP:%d", tam);
    }
    else
    {
        printf("RESP:%d", result);
    }

    return 0;
}