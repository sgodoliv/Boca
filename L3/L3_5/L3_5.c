#include <stdio.h>

int Propriedade(int num)
{
    int ab = 0, cd = 0, ef = 0, prod = 0;

    ab = num / 100;
    cd = num % 100;
    ef = ab + cd;
    prod = ef * ef;

    if(prod == num) {
        return 1;
    }
    else {
        return 0;
    }
}

int main()
{
    int min = 0, max = 0, num = 0, pro = -1;

    scanf("%d %d", &min, &max);

    for (num = min + 1; num < max; num++) {

        pro = Propriedade(num);

        if (pro)
        {
            printf("%d\n", num);
        }
    }

    return 0;
}