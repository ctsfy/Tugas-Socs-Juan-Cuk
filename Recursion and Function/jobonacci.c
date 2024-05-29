#include <stdio.h>
int jobonacci(int n){
    if(n%2==1){
        return 1;
    }
    else if(n==0){
        return 0;
    }
    else{
        return jobonacci(n-1) + jobonacci(n-2);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d\n", jobonacci(n));
}