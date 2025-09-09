#include <stdio.h>

typedef struct
{
    int id_mess;
    int id_pct;
    int tam;
    char mess_parc[10];
    int cod;
} tPacote;

tPacote LePacote()
{
    tPacote pacote;
    int i, tam = 10;
    char lixo[tam];

    scanf("%d %d %1d", &pacote.id_mess, &pacote.id_pct, &pacote.tam);
    for (i = 0; i < pacote.tam; i++)
    {
        scanf("%c", &pacote.mess_parc[i]);
    }
    pacote.mess_parc[i] = '\0';
    tam = 9 - pacote.tam;
    for (i = 0; i < tam; i++)
    {
        scanf("%c", &lixo[i]);
    }
    scanf("%d", &pacote.cod);
    return pacote;
}
int VerificaErro(tPacote pacote)
{
    int soma = 0, i;
    soma = pacote.id_mess + pacote.id_pct + pacote.tam;

    for (i = 0; i < pacote.tam; i++)
    {
        for (i = 0; i < pacote.tam; i++)
        {
            soma = soma + pacote.mess_parc[i];
        }
    }

    if (soma == pacote.cod)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void ImprimePacote(tPacote pacote)
{
    printf("PCT: %d,%d,%d,%s,%d\n", pacote.id_mess, pacote.id_pct, pacote.tam, pacote.mess_parc, pacote.cod);
}

int main()
{
    int qtd, i;

    scanf("%d", &qtd);
    tPacote pacotes[qtd];

    for (i = 0; i < qtd; i++)
    {
        pacotes[i] = LePacote();
        if (VerificaErro(pacotes[i]))
        {
            ImprimePacote(pacotes[i]);
        }
        else
        {
            printf("FALHA!\n");
        }
    }

    return 0;
}