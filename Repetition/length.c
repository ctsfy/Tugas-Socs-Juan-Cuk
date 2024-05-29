#include <stdio.h>
int main(){
long long int a, b, i, counter, j;
scanf("%lld", &a);
for(i=1; i<=a; i++){
    scanf("%lld", &b);
    counter = 0;
    for(j=b; j>0; j/=10){
        counter++;
    }
    printf("Case #%lld: %lld\n", i, counter);
}
    return 0;
}