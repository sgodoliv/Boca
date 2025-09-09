#include <stdio.h>

typedef struct
{
    int id;
    int lado;
    int num[100];
} tCartela;

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
int main()
{
    tCartela cartela;

    cartela = LeCartela();
    ImprimeCartela(cartela);

    return 0;
}