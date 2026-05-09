#include <stdio.h>

int main() {
    double a, b, c, d, e, f;
    double D, Dx, Dy, x, y;
    scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f);

    D = a * e - b * d;  
    Dx = c * e - b * f; 
    Dy = a * f - c * d; 

    if (D == 0) {
        if (Dx == 0 && Dy == 0) {
            printf("The system has infinitely many solutions.\n");
        } else {
            printf("The system has no solution.\n");
        }
    } else {
        x = Dx / D;
        y = Dy / D;
        printf("The solution is: (x, y) = (%.2lf, %.2lf)", x, y);
    }

    return 0;
}