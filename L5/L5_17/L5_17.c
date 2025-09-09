#include <stdio.h>
#include <stdlib.h>

void ImprimeInverso(int i, char vet[500][500])
{
    int j;

    for (j = i - 1; j >= 0; j--)
    {
        printf(" %s", vet[j]);
    }
    printf(" ");
}

int main()
{
    int i, j, rtrn;
    char palavras[500][500];

    for (i = 0; i < 500; i++)
    {
        scanf("%*[^a-zA-Z]");
        if (scanf("%[a-zA-Z]", palavras[i]) == EOF)
        {
            break;
        }
    }

    ImprimeInverso(i, palavras);

    return 0;
}