#include <stdio.h>
int main(){
int a, b, i, sum = 0;
scanf("%d", &a);
for(i=0; i<a; i++){
    scanf("%d", &b);
    sum+=b;
}
printf("%d\n", sum);
    return 0;
}