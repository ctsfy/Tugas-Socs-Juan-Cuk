#include <stdio.h>
int counter = 0;
int fibo(int nol, int satu, int n){
    if(n==0){
        return nol;
    }
    else if(n==1){
        return satu;
    }
    else{
        return fibo(nol, satu, n-1) + fibo(nol, satu, n-2);
    }

}

int main(){
    int n, satu, nol;
    scanf("%d %d %d", &nol, &satu, &n);
    printf("%d\n", fibo(nol, satu, n));
    return 0;
}