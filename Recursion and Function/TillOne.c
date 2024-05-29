#include <stdio.h>
int F(int n){
    if(n==1){
        return 1;
    }
    else if(n%2==1){
        return F(n-1) + F(n+1);
    }
    else{
        return F(n/2);
    }
}

int main(){
    int n, i, t;
    scanf("%d", &t);
    for(i=0; i<t; i++){
        scanf("%d", &n);
        printf("Case #%d: %d\n", i+1, F(n));
    }
    return 0;
}