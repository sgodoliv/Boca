#include <stdio.h>

int EhLetra(char c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int EhLetraMaiuscula(char c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int EhLetraMinuscula(char c)
{
    if (c >= 'a' && c <= 'z')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

char Codifica(char letra, int n)
{
    int chave;

    if (EhLetraMaiuscula(letra))
    {
        chave = (2 * n) % 26;
        letra = 'A' + ((letra - 'A' + chave) % 26);
    }
    else if (EhLetraMinuscula(letra))
    {
        chave = n % 26;
        letra = 'a' + ((letra - 'a' + chave) % 26);
    }

    return letra;
}

char Decodifica(char letra, int n)
{
    int chave;

    if (EhLetraMaiuscula(letra))
    {
        chave = (2 * n) % 26;
        letra = 'A' + ((letra - 'A' - chave + 26) % 26);
    }
    else if (EhLetraMinuscula(letra))
    {
        chave = n % 26;
        letra = 'a' + ((letra - 'a' - chave + 26) % 26);
    }

    return letra;
}

int main()
{
    int modo, chave;
    char letra, nova_letra;

    scanf("%d %d ", &modo, &chave);

    if (chave < 0 && modo == 1)
    {
        modo = 2;
        chave = chave * (-1);
    }
    else if (chave < 0 && modo == 2)
    {
        modo = 1;
        chave = chave * (-1);
    }

    while (scanf("%c", &letra) == 1)
    {

        if (modo != 1 && modo != 2)
        {
            printf("Operacao invalida.");
            break;
        }

        if (EhLetra(letra))
        {
            if (modo == 1)
            {
                nova_letra = Codifica(letra, chave);
            }
            else if (modo == 2)
            {
                nova_letra = Decodifica(letra, chave);
            }
            printf("%c", nova_letra);
        }
        else
        {
            printf("%c", letra);

            if (letra == '.')
            {
                break;
            }
        }
    }

    return 0;
}