#include <stdio.h>
int fibo(int n, int nol, int satu){
    if(n==0){
        return nol;
    }
    else if(n==1){
        return satu;
    }
    else{
        return fibo(n-1, nol, satu) - fibo(n-2, nol, satu);
    }
}

int main(){
    int n, satu, nol, t, i;
    scanf("%d", &t);
    for(i=0; i<t; i++){
        scanf("%d %d %d", &n, &nol, &satu);
        printf("Case #%d: %d\n", i+1, fibo(n, nol, satu));
    }
    return 0;
}