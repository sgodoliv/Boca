#include <stdio.h>
#include <math.h>

int main() {
int person, num, intrestonum;
double divinum, decinum, restonum;

scanf("%d %d", &person, &num);

divinum = (double)num/(double)person;
decinum = divinum - (int)divinum;
restonum = decinum*(double)person;
intrestonum = (int)restonum;

if (restonum == (double)0) {
    printf ("RESP:%d", person);
}
else {
    printf ("RESP:%d", intrestonum);
}

return 0;

}