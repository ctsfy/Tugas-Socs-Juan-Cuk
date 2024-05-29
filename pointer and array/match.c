#include <stdio.h>
int main(){
int t, ukuran, i, j, bibi, lili;
scanf("%d", &t);
for(i=0; i<t; i++){
    scanf("%d", &ukuran);
    int array[ukuran];
    for(j=0; j<ukuran; j++){
        scanf("%d", &array[j]);
    }

    scanf("%d %d", &bibi, &lili);
    if(array[bibi-1] > array[lili-1]){
        printf("Case #%d : Bibi\n", i+1);
    }
    else if(array[bibi-1] < array[lili-1]){
        printf("Case #%d : Lili\n", i+1);
    }
    else if(array[bibi-1] == array[lili-1]){
        printf("Case #%d : Draw\n", i+1);
    }
}
    return 0;
}