#include <stdio.h>
int main(){
long long int i, t, laki, perempuan;
scanf("%lld", &t);
for(i=1; i<=t; i++){
    scanf("%lld %lld", &laki, &perempuan);
    if(laki*perempuan % 2 == 0){
        printf("Case #%lld: Party time!\n", i);
    }
    else{
        printf("Case #%lld: Need more frogs\n", i);
    }
}
    return 0;
}