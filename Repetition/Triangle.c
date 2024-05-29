#include <stdio.h>
int main(){
int t, a, i, j, k, space;
scanf("%d", &t);
for(i=0; i<t; i++){
    scanf("%d", &a);
    printf("Case #%d:\n", i+1);
    for(j=0; j<a; j++){
        space = a - j - 1;
        for(k=0; k<space; k++){
            printf(" ");
        }
        for(k=0; k<j+1; k++){
            if((k+1+a)%2==0){
                printf("*");
            }
            else{
                printf("#");
            }
        }
        printf("\n");
    }
}
    return 0;
}