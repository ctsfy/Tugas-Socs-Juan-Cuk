#include <stdio.h>
int main(){
int i, a, b, t;
scanf("%d", &t);
for(i=1; i<=t; i++){
    scanf("%d %d", &a, &b);
    if(a>b){
        printf("Case #%d: Go-Jo\n", i);
    }
    else{
        printf("Case #%d: Bi-Pay\n", i);
    }
}
    return 0;
}