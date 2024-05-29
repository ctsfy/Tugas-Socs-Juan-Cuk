#include <stdio.h>
int main(){
int ukuran, i;
scanf("%d", &ukuran);
int array[ukuran];
for(i=0; i<ukuran; i++){
    scanf("%d", &array[i]);
}
for(i=1; i<ukuran; i++){
    if(array[i] == 1){
        printf("%d ", array[i-1]);
    }
    if(i==ukuran-1){
        printf("%d\n", array[i]);
    }
}

    return 0;
}