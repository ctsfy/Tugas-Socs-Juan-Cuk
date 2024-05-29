#include <stdio.h>
int main(){
int a, b, i;
scanf("%d %d", &a, &b);
for(i = 1; i<=b; i++){
    printf("%d\n", a++);
}
return 0;
}