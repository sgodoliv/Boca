#include <stdio.h>

typedef struct
{
    int dia;
    int mes;
    int ano;
} tData;

tData LeData()
{
    tData data = {1, 1, 1};

    scanf("%d %d %d", &data.dia, &data.mes, &data.ano);

    return data;
}

int EhBissexto(tData data)
{
    if ((data.ano % 4) == 0 && (data.ano % 100) != 0)
    {
        return 1;
    }
    else if ((data.ano % 4) == 0 && (data.ano % 100) == 0 && (data.ano % 400) == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int QtsDias(tData data)
{
    if (data.mes == 1 || data.mes == 3 || data.mes == 5 || data.mes == 7 ||
        data.mes == 8 || data.mes == 10 || data.mes == 12)
    {
        return 31;
    }
    else if (data.mes == 2)
    {
        if (EhBissexto(data))
        {
            return 29;
        }
        else
        {
            return 28;
        }
    }
    else if (data.mes == 4 || data.mes == 6 || data.mes == 9 || data.mes == 11)
    {
        return 30;
    }
    else
    {
        return -1;
    }
}

int EhDataValida(tData data)
{
    int valido = 0;
    if (data.ano >= 0)
    {
        valido++;
    }
    if (data.mes >= 1 && data.mes <= 12)
    {
        valido++;
    }
    if (data.dia >= 1 && data.dia <= (QtsDias(data)))
    {
        valido++;
    }

    if (valido == 3)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

tData AlteraData(tData data)
{
    if (!(data.mes >= 1 && data.mes <= 12))
    {
        if (data.mes < 1)
        {
            data.mes = 1;
        }
        else
        {
            data.mes = 12;
        }
    }
    if (!(data.dia >= 1 && data.dia <= (QtsDias(data))))
    {
        data.dia = QtsDias(data);
    }

    return data;
}

void ImprimeData(tData data)
{
    if (data.dia < 10 && data.mes < 10 && data.ano < 10)
    {
        printf("'0%d/0%d/000%d'", data.dia, data.mes, data.ano);
    }
    else if (data.dia < 10 && data.mes >= 10 && data.ano < 10)
    {
        printf("'0%d/%d/000%d'", data.dia, data.mes, data.ano);
    }
    else if (data.dia >= 10 && data.mes < 10 && data.ano < 10)
    {
        printf("'%d/0%d/000%d'", data.dia, data.mes, data.ano);
    }
    else if (data.dia >= 10 && data.mes >= 10 && data.ano < 10)
    {
        printf("'%d/%d/000%d'", data.dia, data.mes, data.ano);
    }

    else if (data.dia < 10 && data.mes < 10 && data.ano < 100)
    {
        printf("'0%d/0%d/00%d'", data.dia, data.mes, data.ano);
    }
    else if (data.dia < 10 && data.mes >= 10 && data.ano < 100)
    {
        printf("'0%d/%d/00%d'", data.dia, data.mes, data.ano);
    }
    else if (data.dia >= 10 && data.mes < 10 && data.ano < 100)
    {
        printf("'%d/0%d/00%d'", data.dia, data.mes, data.ano);
    }
    else if (data.dia >= 10 && data.mes >= 10 && data.ano < 100)
    {
        printf("'%d/%d/00%d'", data.dia, data.mes, data.ano);
    }

    else if (data.dia < 10 && data.mes < 10 && data.ano < 1000)
    {
        printf("'0%d/0%d/0%d'", data.dia, data.mes, data.ano);
    }
    else if (data.dia < 10 && data.mes >= 10 && data.ano < 1000)
    {
        printf("'0%d/%d/0%d'", data.dia, data.mes, data.ano);
    }
    else if (data.dia >= 10 && data.mes < 10 && data.ano < 1000)
    {
        printf("'%d/0%d/0%d'", data.dia, data.mes, data.ano);
    }
    else if (data.dia >= 10 && data.mes >= 10 && data.ano < 1000)
    {
        printf("'%d/%d/0%d'", data.dia, data.mes, data.ano);
    }

    else if (data.dia < 10 && data.mes < 10 && data.ano >= 1000)
    {
        printf("'0%d/0%d/%d'", data.dia, data.mes, data.ano);
    }
    else if (data.dia < 10 && data.mes >= 10 && data.ano >= 1000)
    {
        printf("'0%d/%d/%d'", data.dia, data.mes, data.ano);
    }
    else if (data.dia >= 10 && data.mes < 10 && data.ano >= 1000)
    {
        printf("'%d/0%d/%d'", data.dia, data.mes, data.ano);
    }
    else if (data.dia >= 10 && data.mes >= 10 && data.ano >= 1000)
    {
        printf("'%d/%d/%d'", data.dia, data.mes, data.ano);
    }
}

tData ProxData(tData data)
{
    data.dia = data.dia + 1;

    if (data.dia > QtsDias(data))
    {
        data.dia = 1;
        data.mes = data.mes + 1;

        if (data.mes > 12)
        {
            data.mes = 1;
            data.ano = data.ano + 1;
        }
    }

    return data;
}

int EhDataIgual(tData prox_data, tData data2)
{
    if (prox_data.dia == data2.dia &&
        prox_data.mes == data2.mes &&
        prox_data.ano == data2.ano)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int linhas = 0, loop = 0;
    tData data = {1, 1, 1};

    scanf("%d", &linhas);

    for (loop = 1; loop <= linhas; loop++)
    {
        data = LeData();
        if (!EhDataValida(data))
        {
            data = AlteraData(data);
        }
        ImprimeData(data);
        if (EhBissexto(data))
        {
            printf(":Bisexto");
        }
        else
        {
            printf(":Normal");
        }
        printf("\n");
    }

    return 0;
}