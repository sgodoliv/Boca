#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <sys/stat.h>  // Necessário para mkdir()
#include <sys/types.h> // Necessário para mkdir()

void CriaDiretorioUnidade(char diretorio_original[], char u)
{
    int tam = 0;
    char diretorio[200];
    diretorio[1] = '\0';

    strcpy(diretorio, diretorio_original);

    tam = strlen(diretorio);
    diretorio[tam] = u;
    diretorio[tam + 1] = '\0';

    printf("Tentando criar o diretório: %s\n", diretorio);

    if (mkdir(diretorio, 0777) == 0)
    {
        printf("Diretório '%s' criado com sucesso!\n", diretorio);
    }
    else
    {
        perror("Erro ao criar o diretório"); // perror imprime uma mensagem de erro descritiva
        // Verificamos se o erro é porque o diretório já existe
        if (errno == EEXIST)
        {
            printf("O diretório '%s' já existe.\n", diretorio);
        }
        exit(1); // Sai com código de erro
    }
}
void CriaDiretorioDezena(char diretorio_original[], char d, char u)
{
    int tam = 0;
    char diretorio[200];
    diretorio[1] = '\0';

    strcpy(diretorio, diretorio_original);

    tam = strlen(diretorio);
    diretorio[tam] = d;
    diretorio[tam + 1] = u;
    diretorio[tam + 2] = '\0';

    printf("Tentando criar o diretório: %s\n", diretorio);

    if (mkdir(diretorio, 0777) == 0)
    {
        printf("Diretório '%s' criado com sucesso!\n", diretorio);
    }
    else
    {
        perror("Erro ao criar o diretório"); // perror imprime uma mensagem de erro descritiva
        // Verificamos se o erro é porque o diretório já existe
        if (errno == EEXIST)
        {
            printf("O diretório '%s' já existe.\n", diretorio);
        }
        exit(1); // Sai com código de erro
    }
}
int main(int argc, char *argv[])
{
    char diretorio[200];
    char caminho_L2[100] = "L5/L5_";
    char u, d;
    int cont;
    int tam = 0;

    if (argc <= 1)
    {
        printf("Diretório não informado!\n");
        exit(1);
    }

    // Verificamos se o nome do diretório cabe no buffer.
    if (strlen(argv[1]) + strlen(caminho_L2) + 2 >= sizeof(diretorio))
    {
        printf("Nome do diretório muito longo!\n");
        exit(1);
    }

    sprintf(diretorio, "%s/", argv[1]);
    strcat(diretorio, caminho_L2);

    for (u = '1'; u <= '9'; u++)
    {
        CriaDiretorioUnidade(diretorio, u);
    }

    for (d = '1'; d <= '1'; d++)
    {
        for (u = '0'; u <= '9'; u++)
        {
            CriaDiretorioDezena(diretorio, d, u);
        }
    }

    return 0;
}