#include <stdio.h>
int main(){
long long int a, b, c, d, e, f, g, h, i, j, k, l;
scanf("(%lld+%lld)x(%lld-%lld)\n", &a, &b, &c, &d);
scanf("(%lld+%lld)x(%lld-%lld)\n", &e, &f, &g, &h);
scanf("(%lld+%lld)x(%lld-%lld)", &i, &j, &k, &l);
printf("%lld ", (a+b)*(c-d));
printf("%lld ", (e+f)*(g-h));
printf("%lld\n", (i+j)*(k-l));
    return 0;
}