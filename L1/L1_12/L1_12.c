#include <stdio.h>
#include <ctype.h>

int main() {
int N1, N2, N3;

scanf("%d %d %d", &N1, &N2, &N3);

if (N1>N2 && N1>N3 && N2>N3) {
    printf ("N3 = %d, N2 = %d, N1 = %d", N3, N2, N1);
}
else {
    if (N1>N2 && N1>N3 && N3>N2) {
       printf ("N2 = %d, N3 = %d, N1 = %d", N2, N3, N1); 
    }
    else {
        if (N2>N1 && N2>N3 && N1>N3) {
            printf ("N3 = %d, N1 = %d, N2 = %d", N3, N1, N2); 
        }
        else {
            if (N2>N1 && N2>N3 && N3>N1) {
                printf ("N1 = %d, N3 = %d, N2 = %d", N1, N3, N2);
            }
            else {
                if (N3>N1 && N3>N2 && N1>N2) {
                    printf ("N2 = %d, N1 = %d, N3 = %d", N2, N1, N3);
                }
                else {
                    if (N3>N1 && N3>N2 && N2>N1) {
                        printf ("N1 = %d, N2 = %d, N3 = %d", N1, N2, N3);
                    }
                }
            }
        }
    }
}

return 0;

}