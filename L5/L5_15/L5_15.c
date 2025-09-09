#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int codigo;
    char sobrenome[21];
    char nome[21];
    int nota;
    int idade;
} tCandidato;

tCandidato LeCandidato()
{
    tCandidato candidato;
    scanf("%*[^{]");
    scanf("%*[{ ]");
    scanf("%d", &candidato.codigo);
    scanf("%*[, ]");
    scanf("%[^,],", candidato.sobrenome);
    scanf("%*[ ]");
    scanf("%[^,],", candidato.nome);
    scanf("%d", &candidato.nota);
    scanf("%*[, ]");
    scanf("%d", &candidato.idade);
    scanf("%*[^\n]\n");
    return candidato;
}
void ImprimeCandidato(tCandidato candidato)
{
    printf("CAND(%d): %s %s, Nota:%d, Idade:%d\n",
           candidato.codigo, candidato.nome,
           candidato.sobrenome, candidato.nota, candidato.idade);
}
void OrdenaCrescente(tCandidato *vet, int qtd)
{
    int i, j, rtrn, rtrn2;
    tCandidato aux;
    char leti, letj;

    for (i = 0; i < qtd; i++)
    {
        for (j = i + 1; j < qtd; j++)
        {
            rtrn = strcmp(vet[i].nome, vet[j].nome);

            if (rtrn > 0)
            {
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
            else if (rtrn == 0)
            {
                rtrn2 = strcmp(vet[i].sobrenome, vet[j].sobrenome);

                if (rtrn2 > 0)
                {
                    aux = vet[i];
                    vet[i] = vet[j];
                    vet[j] = aux;
                }
            }
        }
    }
}

int main()
{
    int qtdCand, i, j;

    scanf("%d", &qtdCand);
    tCandidato candidatos[qtdCand];

    for (i = 0; i < qtdCand; i++)
    {
        candidatos[i] = LeCandidato();
    }

    OrdenaCrescente(candidatos, qtdCand);

    for (i = 0; i < qtdCand; i++)
    {
        ImprimeCandidato(candidatos[i]);
    }

    return 0;
}
