#include <stdio.h>
#include <stdlib.h>

int main() {
int x1, y1, x2, y2, x3, y3, xmaior, xmenor, ymenor, ymaior;

scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);

if(x1>x2) {
    xmaior=x1;
    xmenor=x2;
}
else {
    xmaior=x2;
    xmenor=x1;
}

if(y1>y2) {
    ymaior=y1;
    ymenor=y2;
}
else {
    ymaior=y2;
    ymenor=y1;
}

if (xmaior>=x3 && x3>=xmenor && ymaior>=y3 && y3>=ymenor) {
    printf ("Dentro");
}
else {
    printf ("Fora");
}

return 0;

}
