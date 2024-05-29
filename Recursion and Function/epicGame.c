#include <stdio.h>

void game(long long int n){
    long long int counter = 0;
    while(n>1){
        if(n%2==0){
            n/=2;
        }
        else{
            n = 3*n+1;
        }
        counter++;
    }
    if(counter%2==0){
        printf("Lili\n");
    }
    else{
        printf("Jojo\n");
    }
}

int main(){
    long long int t, i, n;
    scanf("%lld", &t);
    for(i=0; i<t; i++){
        scanf("%lld", &n);
        printf("Case #%lld: ", i+1);
        game(n);
    }
}