#include <stdio.h>

int area(int x1, int y1, int x2, int y2)
{

    return (y2 - y1) * (x2 - x1);
}

int area_total(int r1_x1, int r1_y1, int r1_x2, int r1_y2, int r2_x1, int r2_y1, int r2_x2, int r2_y2)
{
    int area1 = 0, area2 = 0, area3 = 0;

    area1 = area(r1_x1, r1_y1, r1_x2, r1_y2);

    area2 = area(r2_x1, r2_y1, r2_x2, r2_y2);

    if (r2_y1 < r1_y2)
    {
        area3 = area(r1_x2, r1_y2, r2_x1, r2_y1);
    }

    return area1 + area2 - area3;
}

int main()
{
    int total = 0, r1_x1, r1_y1, r1_x2, r1_y2, r2_x1, r2_y1, r2_x2, r2_y2;

    scanf("%d %d %d %d\n%d %d %d %d", &r1_x1, &r1_y1, &r1_x2, &r1_y2, &r2_x1, &r2_y1, &r2_x2, &r2_y2);

    total = area_total(r1_x1, r1_y1, r1_x2, r1_y2, r2_x1, r2_y1, r2_x2, r2_y2);

    printf("RESP:%d", total);

    return 0;
}