#include <stdio.h>

typedef struct
{
    int x;
    int y;
} tPonto;

tPonto IniciaPontoDado(int x, int y) {
    tPonto ponto = {1, 1};

    ponto.x = x;
    ponto.y = y;

    return ponto;
}
tPonto IniciaPontoEntPad()
{
    tPonto ponto = {1, 1};

    scanf("%d %d", &ponto.x, &ponto.y);

    return ponto;
}
void ImprimePonto(tPonto ponto)
{
    printf("(%d,%d) ", ponto.x, ponto.y);
}
tPonto AlteraAbs(tPonto ponto);
tPonto AlteraOrd(tPonto ponto);
int ObtemAbs(tPonto ponto);
int ObtemOrd(tPonto ponto);
tPonto MovePonto(int dx, int dy);
float DistEntre2Pontos(tPonto ponto1, tPonto ponto2);
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

int main()
{
    int qtd = 0, loop = 0, quad = 0;
    tPonto ponto = {1, 1}, ponto_sim = {1, 1};

    scanf("%d", &qtd);

    for (loop = 1; loop <= qtd; loop++)
    {
        ponto = IniciaPontoEntPad();
        ImprimePonto(ponto);
        quad = IdentQuadrante(ponto);
        printf("%d ", quad);
        ponto_sim = PontoSimetrico(ponto);
        ImprimePonto(ponto_sim);
        quad = IdentQuadrante(ponto_sim);
        printf("%d", quad);
        printf("\n");
    }

    return 0;
}
