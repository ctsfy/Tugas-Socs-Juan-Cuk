#include <stdio.h>
int main(){
int t, i, j, k, a;
scanf("%d", &t);
for(i=0; i<t; i++){
    scanf("%d", &a);
    for(j=0; j<a; j++){
        int space = a-j-1;
        for(k=0; k<space; k++){
            printf(" ");
        }
        for(k=0; k<j*2+1; k++){
            printf("*");
        }
        printf("\n");   
    }
}
    return 0;
}