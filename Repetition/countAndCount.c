#include <stdio.h>
int main(){
int a, b, i, j;
scanf("%d", &a);
for(i=1; i<=a; i++){
    scanf("%d", &b);
    printf("Case #%d:\n", i);
    for(j=1; j<=b; j++){
        if(j%3 == 0 || j%5 == 0){
            if(j%15==0){
                printf("%d Lili\n", j);
            }
            else{
                printf("%d Jojo\n", j);
            }
        }
        else{
            printf("%d Lili\n", j);
        }
    }
}
    return 0;
}