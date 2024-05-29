#include <stdio.h>

int counter=0;
int F(int n){
    if(n%3==0 && n>0){
        counter++;
    }
    if(n%5==0 && n>0){
        return n*2;
    }
    else{
        if(n==0){
            return 1;
        }
        else if(n==1){
            return 2;
        }
        else{
            return F(n-1) + n + F(n-2) + n - 2;
        }
    }
}

int main(){
int t, i, n;
scanf("%d", &t);
for(i=0; i<t; i++){
    scanf("%d", &n);
    counter = 0;
    int hasil = F(n);
    printf("Case #%d: %d %d\n", i+1, hasil, counter);
}
    return 0;
}