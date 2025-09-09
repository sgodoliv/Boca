#include <stdio.h>
#include <math.h>

void IniciaVetor(int vetor[], int tam)
{
    int i = 0;

    for (i = 1; i <= tam; i++)
    {
        vetor[i] = 0;
    }
}
void ImprimeVetor(int vetor[], int tam)
{
    int i = 0;

    for (i = 1; i <= tam; i++)
    {
        printf("%d\n", vetor[i]);
    }
}
void LeVetor(int vetor[], int tam)
{
    int i = 0;

    for (i = 1; i <= tam; i++)
    {
        scanf("%d", &vetor[i]);
    }
}
int CalculaMaiorNota(int vetor[], int tam)
{
    int i = 0, maior_nota = -1;

    for (i = 1; i <= tam; i++)
    {
        if (vetor[i] > maior_nota)
        {
            maior_nota = vetor[i];
        }
    }

    return maior_nota;
}
int CalculaMenorNota(int vetor[], int tam)
{
    int i = 0, menor_nota = 101;

    for (i = 1; i <= tam; i++)
    {
        if (vetor[i] < menor_nota)
        {
            menor_nota = vetor[i];
        }
    }

    return menor_nota;
}
double CalculaMedia(int vetor[], int tam)
{
    int soma = 0, i = 0;
    double media = 0.0;

    for (i = 1; i <= tam; i++)
    {
        soma = soma + vetor[i];
    }

    media = (double)soma / (double)tam;

    return media;
}
double CalculaDesvioPad(int vetor[], int tam)
{
    int i = 0;
    double soma = 0.0, media = 0.0, desvio = 0.0;

    media = CalculaMedia(vetor, tam);

    for (i = 1; i <= tam; i++)
    {
        soma = soma + pow((vetor[i] - media), 2);
    }

    desvio = sqrt((double)soma / (double)tam);

    return desvio;
}
int QtdAcimaDaMedia(int vetor[], int tam)
{
    int qtd = 0, i = 0;
    double media = 0.0;

    media = CalculaMedia(vetor, tam);

    for (i = 1; i <= tam; i++)
    {
        if (vetor[i] > media)
        {
            qtd++;
        }
    }

    return qtd;
}
int QtdReprovados(int vetor[], int tam)
{
    int qtd = 0, i = 0;

    for (i = 1; i <= tam; i++)
    {
        if (vetor[i] < 70)
        {
            qtd++;
        }
    }

    return qtd;
}

int main()
{
    int tam, menor_nota = 0, maior_nota = 0, qtd_acima = 0, qtd_reprovado = 0;
    double media = 0.0, desvio = 0.0;

    scanf("%d", &tam);

    int notas[tam];
    IniciaVetor(notas, tam);
    LeVetor(notas, tam);

    menor_nota = CalculaMenorNota(notas, tam);
    maior_nota = CalculaMaiorNota(notas, tam);
    media = CalculaMedia(notas, tam);
    desvio = CalculaDesvioPad(notas, tam);
    qtd_acima = QtdAcimaDaMedia(notas, tam);
    qtd_reprovado = QtdReprovados(notas, tam);

    printf("MENOR:%d, MAIOR:%d, MEDIA:%.2lf, STD:%.2lf, ACIMA_MEDIA_CONC:%d, REPROV:%d",
           menor_nota, maior_nota, media, desvio, qtd_acima, qtd_reprovado);

    return 0;
}