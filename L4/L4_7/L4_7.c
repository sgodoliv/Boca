#include <stdio.h>
#include <math.h>

typedef struct
{
    int x;
    int y;
} tPonto;

tPonto IniciaPontoDado(int x, int y)
{
    tPonto ponto = {1, 1};

    ponto.x = x;
    ponto.y = y;

    return ponto;
}
tPonto IniciaPontoLido()
{
    tPonto ponto = {1, 1};

    scanf("%d %d", &ponto.x, &ponto.y);

    return ponto;
}
void ImprimePonto(tPonto ponto)
{
    printf("(%d,%d) ", ponto.x, ponto.y);
}
int ObtemAbs(tPonto ponto)
{
    return ponto.x;
}
int ObtemOrd(tPonto ponto)
{
    return ponto.y;
}
tPonto AlteraAbs(tPonto ponto, tPonto p)
{
    ponto.x = ObtemAbs(p);

    return ponto;
}
tPonto AlteraOrd(tPonto ponto, tPonto p)
{
    ponto.y = ObtemOrd(p);

    return ponto;
}
tPonto MovePonto(tPonto ponto, int dx, int dy)
{
    ponto.x = ponto.x + dx;
    ponto.y = ponto.y + dy;

    return ponto;
}
float DistEntre2Pontos(tPonto ponto1, tPonto ponto2)
{
    float dist = 1.1;
    int x1 = 0, x2 = 0, y1 = 0, y2 = 0, dx = 0, dy = 0;

    x1 = ObtemAbs(ponto1);
    y1 = ObtemOrd(ponto1);

    x2 = ObtemAbs(ponto2);
    y2 = ObtemOrd(ponto2);

    if (x1 >= x2)
    {
        dx = x1 - x2;
    }
    else
    {
        dx = x2 - x1;
    }

    if (y1 >= y2)
    {
        dy = y1 - y2;
    }
    else
    {
        dy = y2 - y1;
    }

    dist = sqrt(pow(dx, 2) + pow(dy, 2));

    return dist;
}
int IdentQuadrante(tPonto ponto)
{
    if (ponto.x == 0 || ponto.y == 0)
    {
        return 0;
    }
    else if (ponto.x > 0 && ponto.y > 0)
    {
        return 1;
    }
    else if (ponto.x < 0 && ponto.y > 0)
    {
        return 2;
    }
    else if (ponto.x < 0 && ponto.y < 0)
    {
        return 3;
    }
    else if (ponto.x > 0 && ponto.y < 0)
    {
        return 4;
    }
}
tPonto PontoSimetrico(tPonto ponto)
{
    tPonto ponto_sim = {1, 1};

    ponto_sim.x = ponto.x * (-1);
    ponto_sim.y = ponto.y * (-1);

    return ponto_sim;
}

typedef struct
{
    tPonto pi;
    tPonto pf;
} tReta;

tReta IniciaRetaDada(tPonto pi, tPonto pf)
{
    tReta reta = {1, 1, 1, 1};

    reta.pi = pi;
    reta.pf = pf;

    return reta;
}
tReta IniciaRetaLida()
{
    tReta reta = {1, 1, 1, 1};

    reta.pi = IniciaPontoLido();
    reta.pf = IniciaPontoLido();

    return reta;
}
void ImprimeReta(tReta reta)
{
    printf("[");
    ImprimePonto(reta.pi);
    printf(":");
    ImprimePonto(reta.pf);
    printf("]");
}
tPonto ObtemPi(tReta reta)
{
    return reta.pi;
}
tPonto ObtemPf(tReta reta)
{
    return reta.pf;
}
tReta MoveReta(tReta reta, tPonto dpi, tPonto dpf)
{
    // altera pi da reta
    reta.pi = AlteraAbs(reta.pi, dpi);
    reta.pi = AlteraOrd(reta.pi, dpi);
    // altera pf da reta
    reta.pf = AlteraAbs(reta.pf, dpi);
    reta.pf = AlteraOrd(reta.pf, dpi);

    return reta;
}
float TamanhoReta(tReta reta)
{
    float tam = 1.0;

    tam = DistEntre2Pontos(reta.pi, reta.pf);
}

int main()
{
    int qtd = 0, loop = 0, quad_pi = 0, quad_pf = 0;
    tPonto ponto = {1, 1}, pi = {1, 1}, pf = {1, 1};
    tReta reta = {1, 1, 1, 1};

    scanf("%d", &qtd);

    for (loop = 1; loop <= qtd; loop++)
    {
        reta = IniciaRetaLida();

        pi = ObtemPi(reta);
        pf = ObtemPf(reta);

        quad_pi = IdentQuadrante(pi);
        quad_pf = IdentQuadrante(pf);

        if (quad_pi == quad_pf && quad_pi != 0)
        {
            printf("MESMO\n");
        }
        else
        {
            printf("DIFERENTE\n");
        }
    }

    return 0;
}
