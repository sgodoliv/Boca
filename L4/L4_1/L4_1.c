#include <stdio.h>

typedef struct
{
    int cod;
    float pre;
    int qtd;
} tProduto;

tProduto LeProduto()
{
    tProduto p = {-20, -2.0, -20};

    scanf("%d;%f;%d", &p.cod, &p.pre, &p.qtd);

    return p;
}

int EhProduto1MaiorQ2(tProduto p1, tProduto p2)
{
    if (p1.pre > p2.pre)
    {
        return 1;
    }
    else if (p1.pre < p2.pre)
    {
        return 2;
    }
    else if (p1.pre == p2.pre)
    {
        return 2;
    }
}

int EhProduto1MenorQ2(tProduto p1, tProduto p2)
{
    if (p1.pre < p2.pre)
    {
        return 1;
    }
    else if (p1.pre > p2.pre)
    {
        return 2;
    }
    else if (p1.pre == p2.pre)
    {
        return 2;
    }
}

int TemProdutoEmEstoque(tProduto p)
{
    if (p.qtd == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void ImprimeProduto(tProduto p)
{
    printf("COD %d, PRE %.2f, QTD %d\n", p.cod, p.pre, p.qtd);
}

int main()
{
    int linhas = 0, loop = 0, maior = 0, menor = 0;
    tProduto p1 = {-20, -2.0, -20}, p2 = {-20, -2.0, -20}, p_aux = {-20, -2.0, -20}, p_maior = {-20, -2.0, -20}, p_menor = {-20, -2.0, -20};

    scanf("%d", &linhas);

    p1 = LeProduto();
    if (TemProdutoEmEstoque(p1))
    {
        printf("FALTA:");
        ImprimeProduto(p1);
    }

    p_maior = p1;
    p_menor = p1;

    for (loop = 1; loop <= (linhas - 1); loop++)
    {
        p2 = LeProduto();
        if (TemProdutoEmEstoque(p2))
        {
            printf("FALTA:");
            ImprimeProduto(p2);
        }

        if (EhProduto1MaiorQ2(p2, p_maior) == 1)
        {
            p_maior = p2;
        }

        if (EhProduto1MenorQ2(p2, p_menor) == 1)
        {
            p_menor = p2;
        }
    }

    printf("MAIOR:");
    ImprimeProduto(p_maior);

    printf("MENOR:");
    ImprimeProduto(p_menor);

    return 0;
}