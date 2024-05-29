#include <stdio.h>
int main(){
int t, a, b, c, i, counter = 0;
scanf("%d", &t);
for(i=0; i<t; i++){
    scanf("%d %d %d", &a, &b, &c);
    if(b > a && a <= c && b > c){
        counter++;
    }
}
printf("%d\n", counter);
    return 0;
}