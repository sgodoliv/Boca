#include <stdio.h>

float Soma(float a, float b)
{
    float soma;

    soma = a + b;

    return soma;
}

float Subtracao(float a, float b)
{

    float sub;

    sub = a - b;

    return sub;
}
float Divisao(float a, float b)
{

    float div;

    div = a / b;

    return div;
}
float Multiplicacao(float a, float b)
{

    float mult;

    mult = a * b;

    return mult;
}

int main()
{
    char carac;
    float a = 0, b = 0, c = 0, result = 0;

    scanf("%f %f", &a, &b);

    scanf(" %c", &carac);

    if (carac == '+')
    {
        result = Soma(a, b);
    }

    else if (carac == '-')
    {
        result = Subtracao(a, b);
    }

    else if (carac == '*')
    {
        result = Multiplicacao(a, b);
    }

    else if (carac == '/')
    {
        result = Divisao(a, b);
    }

    while (scanf("%f %c", &c, &carac) == 2)
    {
        if (carac == '+')
        {
            result = Soma(result, c);
        }

        else if (carac == '-')
        {
            result = Subtracao(result, c);
        }

        else if (carac == '*')
        {
            result = Multiplicacao(result, c);
        }

        else if (carac == '/')
        {
            result = Divisao(result, c);
        }
    }

    printf("%.2f", result);

    return 0;
}