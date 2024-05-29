#include <stdio.h>
int main(){
int a, b, c;
scanf("%d %d %d", &a, &b, &c);
if(c-a == b-c && a <= c && b >= c){
    printf("%d\n", c-a);
}
else{
    printf("-1\n");
}
    return 0;
}