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
int ObtemAbs(tPonto ponto)
{
    return ponto.x;
}
int ObtemOrd(tPonto ponto)
{
    return ponto.y;
}
tPonto MovePonto(int dx, int dy);
float DistEntre2Pontos(tPonto ponto1, tPonto ponto2)
{
    float dist = 1.1;
    int x1 = 0, x2 = 0, y1 = 0, y2 = 0, dx = 0, dy = 0;

    x1 = ObtemAbs(ponto1);
    y1 = ObtemOrd(ponto1);

    x2 = ObtemAbs(ponto2);
    y2 = ObtemOrd(ponto2);

    if(x1 >= x2) {
        dx = x1 - x2;
    }
    else {
        dx = x2 - x1;
    }

    if(y1 >= y2) {
        dy = y1 - y2;
    }
    else {
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

int main()
{
    tPonto ponto1 = {1, 1}, ponto2 = {1, 1}, ponto_aux = {1, 1};
    int qtd = 0, loop = 0;
    float dist = 1.1;

    scanf("%d", &qtd);

    printf("-\n");

    ponto_aux = IniciaPontoEntPad();

    for (loop = 1; loop <= (qtd - 1); loop++)
    {
        ponto1 = ponto_aux;
        ponto2 = IniciaPontoEntPad();
        dist = DistEntre2Pontos(ponto1, ponto2);
        printf("%.2f\n", dist);
        ponto_aux = ponto2;
    }

    return 0;
}
