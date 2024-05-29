#include <stdio.h>
int main(){
double a, b, c;
scanf("%lf %lf", &a, &b);
c = a*(1.00+(b/100.00))*(1.00+(b/100.000))*(1.00+(b/100.00));
printf("%.2lf\n", c);
    return 0;
}