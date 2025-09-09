#include <stdio.h>
#include <stdlib.h>

void LeMatriz(int l, int c, int matriz[l][c])
{
    int i, j;

    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
}
void ImprimeMatriz(int l, int c, int matriz[l][c])
{
    int i, j;

    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d", matriz[i][j]);
            if (j != c - 1)
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
void MultiplicaMatriz(int l1, int c1, int matriz1[l1][c1], int l2, int c2, int matriz2[l2][c2])
{
    int nova_matriz[l1][c2], soma = 0;

    int i, j, s;

    for (i = 0; i < l1; i++)
    {
        j = 0;
        while (j < c2)
        {
            soma = 0;
            s = 0;
            while (s < c1)
            {
                soma = soma + (matriz1[i][s] * matriz2[s][j]);
                s++;
            }
            nova_matriz[i][j] = soma;
            j++;
        }
    }

    ImprimeMatriz(l1, c2, nova_matriz);
    printf("\n");

    /*
    00x00
    01x10
    02x20
    03x30
    == 00

    00x01
    01x11
    02x21
    03x31
    == 01

    10x00
    11x10
    12x20
    13x30
    == 10

    10x01
    11x11
    12x21
    13x31
    == 11

    [i][0]x[0][j] + [i][1]x[1][j] = [i][j]
    [0][0]x[0][0] + [0][1]x[1][0] = [0][0]
    [0][0]x[0][1] + [0][1]x[1][1] = [0][1]
    [0][0]x[0][2] + [0][1]x[1][2] = [0][2]

    [1][0]x[0][0] + [1][1]x[1][0] = [1][0]
    [1][0]x[0][1] + [1][1]x[1][1] = [1][1]
    [1][0]x[0][2] + [1][1]x[1][2] = [1][2]

    [2][0]x[0][0] + [2][1]x[1][0] = [2][0]
    [2][0]x[0][1] + [2][1]x[1][1] = [2][1]
    [2][0]x[0][2] + [2][1]x[1][2] = [2][2]
    */
}

int main()
{
    int qtd, i, l1, l2, c1, c2;

    scanf("%d", &qtd);

    for (i = 0; i < qtd; i++)
    {
        scanf("%d %d", &c1, &l1);
        int matriz1[l1][c1];
        LeMatriz(l1, c1, matriz1);

        scanf("%d %d", &c2, &l2);
        int matriz2[l2][c2];
        LeMatriz(l2, c2, matriz2);

        if (c1 == l2)
        {
            MultiplicaMatriz(l1, c1, matriz1, l2, c2, matriz2);
        }
        else
        {
            printf("IMPOSSIVEL\n");
            printf("\n");
        }
    }

    return 0;
}