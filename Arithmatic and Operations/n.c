#include <stdio.h>
int main(){
long double a, b;
scanf("%Lf %Lf", &a, &b);
printf("%.2Lf%%\n", (a-b)/a*100);
    return 0;
}