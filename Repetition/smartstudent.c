#include <stdio.h>
int main(){
int a, b, i;
scanf("%d %d", &a, &b);
for(i=0; i<=b; i++){
    printf("%d\n", a++);
}
    return 0;
}