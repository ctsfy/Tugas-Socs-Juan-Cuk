#include <stdio.h>
int main(){
int T = 3;
double a, b, c, d, e, f;
scanf("%d", &T);
scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f);
printf("%.2lf\n", (a/100)*b);
printf("%.2lf\n", (c/100)*d);
printf("%.2lf\n", (e/100)*f);
    return 0;
}