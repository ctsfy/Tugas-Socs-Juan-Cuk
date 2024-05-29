#include <stdio.h>
int counter = 0;
int fibonacci(int n){
    counter++;
    if(n<=1){
        return n;
    }
    else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main(){
    int t, i, j, n;
    scanf("%d", &t);
    for(i=0; i<t; i++){
        scanf("%d", &n);
        counter = 0;
        fibonacci(n);
        printf("Case #%d: %d\n", i+1, counter);
    }
    return 0;
}