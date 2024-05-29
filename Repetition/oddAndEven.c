#include <stdio.h>
int main(){
int t, ukuran, i, j, countereven, counterodd;
scanf("%d", &t);
for(i=0; i<t; i++){
    scanf("%d", &ukuran);
    int array[ukuran];
    for(j=0; j<ukuran; j++){
        scanf("%d", &array[j]);
    }
    countereven = 0;
    counterodd = 0;
    for(j=0; j<ukuran; j++){
        if(array[j]%2==0){
            countereven++;
        }
        else{
            counterodd++;
        }
    }
    printf("Odd group : %d integer(s).\n", counterodd);
    printf("Even group : %d integer(s).\n", countereven);
    printf("\n");
}
    return 0;
}