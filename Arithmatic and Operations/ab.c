#include <stdio.h>
int main(){
long long int a, baseDamage = 100, bonusDamage = 100, i, sum = 0;

scanf("%lld", &a);
getchar();
for(i=0; i<a-1; i++){
    bonusDamage+=50;
    sum+=bonusDamage;
}
printf("%lld\n", sum+baseDamage);
return 0;
}