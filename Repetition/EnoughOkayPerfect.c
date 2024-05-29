#include <stdio.h>
int main(){
int t, i, counter = 0;
int n = 1;
scanf("%d", &t);
for(i=0; i<t; i++){
    n = 2*n + 1;
}
printf("%d\n", n);
    return 0;
}