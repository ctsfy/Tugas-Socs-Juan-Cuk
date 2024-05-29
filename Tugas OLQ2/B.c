#include <stdio.h>
int main(){
int a, b, c, d, e, f, g, h;
double x, y, z, o;
scanf("%d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h);
x = (double)b*100/(100-a);
y = (double)d*100/(100-c);
z = (double)f*100/(100-e);
o = (double)h*100/(100-g);
printf("$%.2f\n", x);
printf("$%.2f\n", y);
printf("$%.2f\n", z);
printf("$%.2f\n", o);
return 0;
}