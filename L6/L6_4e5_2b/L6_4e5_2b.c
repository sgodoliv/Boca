#include <stdio.h>

typedef struct
{
    int id;
    int lado;
    int num[100];
} tCartela;
typedef struct
{
    int qtd_cartelas;
    tCartela cartelas[100];
} tPartida;

int RetornaTamCartela(tCartela cartela)
{
    return cartela.lado * cartela.lado;
}
tCartela LeCartela()
{
    tCartela cartela;
    int tam, i;

    scanf("%d %d", &cartela.id, &cartela.lado);
    tam = RetornaTamCartela(cartela);

    for (i = 0; i < tam; i++)
    {
        scanf("%d", &cartela.num[i]);
    }

    return cartela;
}
void ImprimeCartela(tCartela cartela)
{
    int matriz[cartela.lado][cartela.lado];
    int tam;
    int i, j, m = 0;

    tam = RetornaTamCartela(cartela);

    for (i = 0; i < cartela.lado; i++)
    {
        for (j = 0; j < cartela.lado; j++)
        {
            matriz[i][j] = cartela.num[m];
            m++;
        }
    }

    printf("ID:%d\n", cartela.id);

    for (i = 0; i < cartela.lado; i++)
    {
        for (j = 0; j < cartela.lado; j++)
        {
            printf("%03d", matriz[j][i]);
            if (j < cartela.lado - 1)
            {
                printf("|");
            }
        }
        printf("\n");
    }
}
tPartida LeCartelasPartida()
{
    tPartida partida;

    scanf("%d", &partida.qtd_cartelas);

    int i;
    for (i = 0; i < partida.qtd_cartelas; i++)
    {
        partida.cartelas[i] = LeCartela();
    }

    return partida;
}
void ImprimeInvCartelasPartida(tPartida partida)
{
    int i;

    for (i = partida.qtd_cartelas - 1; i >= 0; i--)
    {
        ImprimeCartela(partida.cartelas[i]);
    }
}
int main()
{
    tPartida partida;

    partida = LeCartelasPartida();
    ImprimeInvCartelasPartida(partida);

    return 0;
}