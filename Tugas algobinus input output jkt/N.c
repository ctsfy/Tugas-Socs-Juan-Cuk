#include <stdio.h>
int main(){
int b, d;
double a, c;
char name1[101], name2[101];
scanf("%s %lf %d %s %lf %d", &name1, &a, &b, &name2, &c, &d);
printf("Name 1: %s\n", name1);
printf("Height 1: %.2lf\n", a);
printf("Age 1: %d\n", b);
printf("Name 2: %s\n", name2);
printf("Height 2: %.2lf\n", c);
printf("Age 2: %d\n", d);
    return 0;
}