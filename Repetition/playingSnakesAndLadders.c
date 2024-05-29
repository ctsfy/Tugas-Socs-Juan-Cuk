#include <stdio.h>
int main(){
long long int a, b = 0, i, j;
scanf("%lld", &a);
int tempat[a];
for(i = 0; i<a; i++){
    scanf("%lld", &tempat[i]);
    b+=tempat[i];
    if(b==9){
        b+=12;
    }
    else if(b==33){
        b+=9;
    }
    else if(b==76){
        b+=16;
    }
    else if(b==53){
        b-=16;
    }
    else if(b==80){
        b-=21;
    }
    else if(b==97){
        b-=9;
    }
}
printf("%lld\n", b);
    return 0;
}