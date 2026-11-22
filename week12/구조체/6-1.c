#include <stdio.h>

int main() {
    double x1, y1, x2, y2;

    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);

    double x = (x1 + x2) / 2.0;
    double y = (y1 + y2) / 2.0;

    printf("Center point = (%.1f, %.1f)", x, y);

    return 0;
}