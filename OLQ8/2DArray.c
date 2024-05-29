#include <stdio.h>
int main(){
int baris, kolom, list, i, j, x, y, z;
scanf("%d %d %d", &baris, &kolom, &list);
int array[baris][kolom];
int simpan[list];
for(i=0; i<baris; i++){
    for(j=0; j<kolom; j++){
        array[i][j] = 0;
    }
}

for(i=0; i<list; i++){
    scanf("%d %d %d", &x, &y, &z);
    array[x][y] = z;
}

for(i=0; i<baris; i++){
    for(j=0; j<kolom; j++){
        if(j==kolom-1){
            printf("%d\n", array[i][j]);
        }
        else{
            printf("%d ", array[i][j]);
        }
    }
}

    return 0;
}