#include <stdio.h>

void LeMatriz(int l, int c, char matriz[l][c])
{
    int i, j;
    char num;

    scanf("%*c");
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%c", &matriz[i][j]);
        }
        scanf("%*c");
    }
}
void AtualizaMatriz(int l, int c, char matriz[l][c])
{
    int i, j;
    char aux[l][c];

    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            aux[i][j] = matriz[i][j];
        }
    }

    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (aux[i][j] == '0')
            {
                if (i - 1 >= 0)
                {
                    if (aux[i - 1][j] == '1')
                    {
                        matriz[i][j] = '1';
                        continue;
                    }
                }
                if (i + 1 < l)
                {
                    if (aux[i + 1][j] == '1')
                    {
                        matriz[i][j] = '1';
                        continue;
                    }
                }
                if (j - 1 >= 0)
                {
                    if (aux[i][j - 1] == '1')
                    {
                        matriz[i][j] = '1';
                        continue;
                    }
                }
                if (j + 1 < c)
                {
                    if (aux[i][j + 1] == '1')
                    {
                        matriz[i][j] = '1';
                        continue;
                    }
                }
            }
        }
    }
}
int QtdTerraVisivel(int l, int c, char matriz[l][c])
{
    int i, j, cont = 0;

    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (matriz[i][j] == '0')
            {
                cont++;
            }
        }
    }

    return cont;
}

int main()
{
    int t; // tempo
    int l; // linhas
    int c; // colunas
    int qtd = 0;
    int i;

    scanf("%d", &t);
    scanf("%d %d", &c, &l);
    char foto[l][c];

    LeMatriz(l, c, foto);
    qtd = QtdTerraVisivel(l, c, foto);
    printf("%d ", qtd);

    for (i = 0; i < t; i++)
    {
        AtualizaMatriz(l, c, foto);
    }

    qtd = QtdTerraVisivel(l, c, foto);
    printf("%d\n", qtd);

    return 0;
}