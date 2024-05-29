#include <stdio.h>
int main(){
int T = 3;
double a, b, c, d, e, f, g, h, i, j, k, l;
scanf("%d", &T);
scanf("%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k, &l);
printf("%.2lf\n", 2*a + 2*b + (4*c)/3 + d/2);
printf("%.2lf\n", 2*e + 2*f + (4*g)/3 + h/2);
printf("%.2lf\n", 2*i + 2*j + (4*k)/3 + l/2);
    return 0;
}