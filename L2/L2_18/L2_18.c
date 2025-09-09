#include <stdio.h>

int main () {
    int l=0, c=0, v_max=-32767, v=0, i=0, j=0, pl=0, pc=0;

    scanf ("%d %d", &l, &c);

    for (i = 1; i <= l ; i++) {

        for (j = 1; j <= c ; j++) {

            scanf ("%d", &v);

            if (v > v_max) {

                v_max = v;
                pl = i;
                pc = j;

            }

        }

    }

    printf ("%d (%d, %d)", v_max, pl, pc);

    return 0;

}