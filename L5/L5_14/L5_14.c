#include <stdio.h>
#include <stdlib.h>

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
    scanf("%*[{]");
    scanf("%d", &candidato.codigo);
    scanf("%*[, ]");
    scanf("%[^,]", candidato.sobrenome);
    scanf("%*[, ]");
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
int ComparaString(char *str1, char *str2)
{
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            return 0;
        }
        i++;
    }

    return (str1[i] == '\0' && str2[i] == '\0');
}

void ComparaSobrenomeDosCandidatos(tCandidato candidatos[], int qtdCand)
{
    int impresso[qtdCand], i, j, k;

    for (i = 0; i < qtdCand; i++)
    {
        impresso[i] = 0;
    }

    for (i = 0; i < qtdCand; i++)
    {
        for (j = i + 1; j < qtdCand; j++)
        {
            if (ComparaString(candidatos[i].sobrenome, candidatos[j].sobrenome))
            {
                if (!impresso[i])
                {
                    impresso[i] = 1;
                }
                if (impresso[j] != -1)
                {
                    impresso[j] = 1;
                }
            }
        }
        for (k = 0; k < qtdCand; k++)
        {
            if (impresso[k] == 1 && impresso[k] != -1)
            {
                ImprimeCandidato(candidatos[k]);
                impresso[k] = -1;
            }
        }
    }
}

int main()
{
    int qtdCand, i;

    scanf("%d", &qtdCand);
    tCandidato candidatos[qtdCand];

    for (i = 0; i < qtdCand; i++)
    {
        candidatos[i] = LeCandidato();
    }

    ComparaSobrenomeDosCandidatos(candidatos, qtdCand);

    return 0;
}