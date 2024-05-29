#include <stdio.h>
int main(){
int t, bahan, i, j, k;
scanf("%d", &t);
for(i=0; i<t; i++){
    scanf("%d", &bahan);
    int perlu[bahan], ada[bahan];
    for(j=0; j<bahan; j++){
        scanf("%d", &perlu[j]);
    }
    for(j=0; j<bahan; j++){
        scanf("%d", &ada[j]);
    }
    int counter = 0;
    printf("Case #%d: ", i+1);
    for(j=0; j<bahan; j++){
        counter = perlu[j] - ada[j];
        if(j==bahan-1){
            printf("%d\n", counter);
        }
        else{
            printf("%d ", counter);
        }
    }
}
    return 0;
}