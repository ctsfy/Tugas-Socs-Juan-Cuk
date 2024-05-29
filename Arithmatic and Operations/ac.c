#include <stdio.h>
int main(){
long long int a, i, basis=1, sum=0;
scanf("%lld", &a);
for(i=0; i<a; i++){
    basis*=2;
}
printf("%lld\n", basis-1);
return 0;
}