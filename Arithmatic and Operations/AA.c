#include <stdio.h>
int main(){
double a, b, c;
double e;
scanf("%lf %lf %lf", &a, &b, &c);
getchar();
e = (a * 20 / 100) + (b * 30 / 100) + (c * 50 / 100);
printf("%.2lf\n", e);
return 0;
}