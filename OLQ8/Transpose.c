#include <stdio.h>
int main(){
int ukuran, i, j;
scanf("%d", &ukuran);
int array[ukuran][ukuran];
for(i=0; i<ukuran; i++){
    for(j=0; j<ukuran; j++){
        scanf("%d", &array[i][j]);
    }
}

for(j=0; j<ukuran; j++){
    for(i=0; i<ukuran; i++){
        if(i==ukuran-1){
            printf("%d\n", array[i][j]);
        }
        else{
            printf("%d ", array[i][j]);
        }
    }
}
    return 0;
}