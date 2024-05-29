#include <stdio.h>
int main(){
int t, ukuran, i, j;
scanf("%d", &t);
for(i=0; i<t; i++){
    scanf("%d", &ukuran);
    int array[ukuran];
    int counter = 0;
    for(j=0; j<ukuran; j++){
        scanf("%d", &array[j]);
    }
    int max = array[0];
    for(j=0; j<ukuran; j++){
        if(max < array[j]){
            max = array[j];
        }
    }
    //itung ada berapa max
    for(j=0; j<ukuran; j++){
        if(array[j] == max){
            counter++;
        }
    }
    printf("Case #%d: %d\n", i+1, counter);
}
    return 0;
}