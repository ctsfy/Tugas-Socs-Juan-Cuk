#include <stdio.h>
int main() {
long long int t, a, i, j;
scanf("%lld", &t);
for(i = 0; i < t; i++) {
    scanf("%lld", &a);
    long long int sum = 0;
    long long int counter = 0;
    for(j=1; j<=a; j++){
        sum+=j;
        counter++;
        if(sum>=a){
            break;
        }
    }
    printf("Case #%lld: %lld\n", i+1, counter);
}
    return 0;
}
