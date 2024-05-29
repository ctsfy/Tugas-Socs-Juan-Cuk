#include <stdio.h>
int main(){
long long int t, kopi, persen, maxcashback, i;
scanf("%lld", &t);
for(i=1; i<=t; i++){
    scanf("%lld %lld %lld", &kopi, &persen, &maxcashback);
    if(kopi*persen/100 > maxcashback){
        printf("Case #%lld: %lld\n", i, maxcashback);
    }
    else{
        printf("Case #%lld: %lld\n", i, (kopi*persen)/100);
    }
}
    return 0;
}