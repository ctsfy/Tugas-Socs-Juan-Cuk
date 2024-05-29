#include <stdio.h>
int main(){
int t, x, y, i, j, k;
scanf("%d", &t);
for(i=0; i<t; i++){
    scanf("%d %d", &x, &y);
    printf("Case #%d:\n", i+1);
    for(j=0; j<x; j++){
        for(k=0; k<y; k++){
            if(j == 0 || k == y-1 || j == x-1 || k == 0){
                printf("#");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
    return 0;
}