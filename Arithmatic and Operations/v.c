#include <stdio.h>
int main(){
int T = 3;
double a, b, c;
scanf("%d", &T);
scanf("%lf %lf %lf", &a, &b, &c);
printf("%.2lf %.2lf %.2lf\n", (4*a)/5, (9*a)/5+32, 273+a);
printf("%.2lf %.2lf %.2lf\n", (4*b)/5, (9*b)/5+32, 273+b);
printf("%.2lf %.2lf %.2lf\n", (4*c)/5, (9*c)/5+32, 273+c);
    return 0;
}