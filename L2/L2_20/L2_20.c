#include <stdio.h>

int main() {
    float a = 0, b = 0, c = 0, d = 0, y1 =0, y2 = 0, y3 = 0;
    int  xmin = 0, xmax = 0, x = 0, x1 = 0, x2 = 0, x3 = 0, qtdp = 0, qtdv = 0;

    scanf("%f %f %f %f %d %d", &a, &b, &c, &d, &xmin, &xmax);

    for (x = xmin ; x <= xmax ; x++) {

        if (x != xmin && x != xmax) {
            x1 = x-1;
            y1 = a*(x1*x1*x1) + b*(x1*x1) + c*x1 + d;

            x2 = x;
            y2 = a*(x2*x2*x2) + b*(x2*x2) + c*x2 + d;

            x3 = x+1;
            y3 = a*(x3*x3*x3) + b*(x3*x3) + c*x3 + d;

            if (y2 > y1 && y2 > y3) {
                qtdp++;
                printf ("Pico em x=%d\n", x);
            }
            else if (y2 < y1 && y2 < y3) {
                qtdv++;
                printf("Vale em x=%d\n", x);
            }
        }
    }

    if (qtdp == 0) {
        printf ("Nao ha pico\n");
    }

    if (qtdv == 0) {
        printf("Nao ha vale");
    }

    return 0;

}