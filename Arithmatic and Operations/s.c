#include <stdio.h>
int main(){
double p, l, t;
scanf("%lf %lf %lf", &p, &l, &t);
printf("%.3lf\n", (l*t)+3*l*p);
    return 0;
}