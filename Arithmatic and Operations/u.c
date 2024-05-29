#include <stdio.h>
int main(){
int z = 3;
double a, b, c, d, e, f;
scanf("%d", &z);
scanf("%lf %lf", &a, &b);
scanf("%lf %lf", &c, &d);
scanf("%lf %lf", &e, &f);
printf("%.2lf\n", (a*b)/360);
printf("%.2lf\n", (c*d)/360);
printf("%.2lf\n", (e*f)/360);
    return 0;
}