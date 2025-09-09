#include <stdio.h>

int verificapH(float pH)
{
    if (pH == 7.00)
    {
        return 0; // neutro
    }
    else if (pH < 7.00)
    {
        return 1; // ácido
    }
    else if (pH > 7.00)
    {
        return 2; // básico
    }
}

int verificaGotaChuvaAcida(float pH)
{
    if (pH < 5.70)
    {
        return 1; // gota de chuva ácida
    }
    else
    {
        return 0;
    }
}

float porcentagem(float total, float valor) { return (valor / total) * 100.00; }

void imprimeResultadosAnalise(float porcentagemGotasChuvaAcida, float porcentagemGotasChuvaNormal)
{
    if (porcentagemGotasChuvaAcida > 75.00)
    {
        printf("Chuva Acida %.2f%% %.2f%%", porcentagemGotasChuvaAcida, porcentagemGotasChuvaNormal);
    }
    else if (porcentagemGotasChuvaNormal > 75.00)
    {
        printf("Chuva Normal %.2f%% %.2f%%", porcentagemGotasChuvaAcida, porcentagemGotasChuvaNormal);
    }
    else
    {
        printf("Chuva com indicios de chuva acida %.2f%% %.2f%%", porcentagemGotasChuvaAcida, porcentagemGotasChuvaNormal);
    }
}

int main()
{
    int A = 0, D = 0, T = 0, qtd_neutra = 0, qtd_acida = 0, qtd_basica = 0, qtd_chuva_acida = 0, qtd_chuva_normal = 0, total = 0, loop = 0;
    float pH = 0.00, mais_neutra = 0.00, mais_neutra1 = 0.00, mais_neutra2 = 14.00, mais_acida = 7.00, mais_basica = 7.00, porcentagemGotasChuvaAcida = 0.00, porcentagemGotasChuvaNormal = 0.00;

    scanf("%d %d %d", &A, &D, &T);

    total = A * D * T;

    if (total <= 0.00 || total > 30000.00)
    {
        printf("Nenhuma gota foi avaliada");
    }
    else
    {
        for (loop = 1; loop <= total; loop++)
        {

            scanf("%f", &pH);

            if (!verificapH(pH))
            {
                qtd_neutra++;
            }
            else if (verificapH(pH) == 1)
            {
                qtd_acida++;
                if (verificaGotaChuvaAcida(pH))
                {
                    qtd_chuva_acida++;
                }
                if (pH < mais_acida)
                {
                    mais_acida = pH;
                }
            }
            else if (verificapH(pH) == 2)
            {
                qtd_basica++;
                if (pH > mais_basica)
                {
                    mais_basica = pH;
                }
            }
            if (pH <= 7.00)
            {
                if (pH > mais_neutra1)
                {
                    mais_neutra1 = pH;
                }
            }
            else if (pH > 7.00)
            {
                if (pH < mais_neutra2)
                {
                    mais_neutra2 = pH;
                }
            }
        }

        if ((7.00 - mais_neutra1) > (mais_neutra2 - 7.00))
        {
            mais_neutra = mais_neutra2;
        }
        else
        {
            mais_neutra = mais_neutra1;
        }

        qtd_chuva_normal = total - qtd_chuva_acida;

        porcentagemGotasChuvaAcida = porcentagem(total, qtd_chuva_acida);

        porcentagemGotasChuvaNormal = porcentagem(total, qtd_chuva_normal);

        printf("%d %d %d %.2f %.2f %.2f\n", qtd_acida, qtd_basica, qtd_neutra, mais_acida, mais_basica, mais_neutra);

        imprimeResultadosAnalise(porcentagemGotasChuvaAcida, porcentagemGotasChuvaNormal);
    }

    return 0;
}