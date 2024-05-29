#include <stdio.h>
int main(){
int t, a, i, j, k, l, m;
scanf("%d", &t);
for(i=0; i<t; i++){
    scanf("%d", &a);
    for(j=0; j<a; j++){
        for(k=0, l=a-1; k<a, l>=0; k++, l--){
            if(j==0 || k==0 || j==a-1 || k==a-1 || j == k || j == l){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");
}
    return 0;
}