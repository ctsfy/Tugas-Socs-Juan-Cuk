#include <stdio.h>

int count;
char map[101][101];
int baris_pemain, kolom_pemain;

void pacmon(int row, int coloumn){
    if(map[row][coloumn] == '#' || map[row][coloumn] == '\n' || map[row][coloumn] == '\0' 
    || row < 0 || coloumn < 0 ){
        return;
    }

    if(map[row][coloumn] == '*'){
        count++;
    }
    map[row][coloumn] = '#';

    pacmon(row+1, coloumn);
    pacmon(row-1,coloumn);
    pacmon(row, coloumn-1);
    pacmon(row, coloumn+1);
}

int main(){
    int t, i, j, k, baris, kolom;
    scanf("%d", &t);
    for(i=0; i<t; i++){
        scanf("%d %d", &baris, &kolom);
        for(j=0; j<baris; j++){
            for(k=0; k<kolom+1; k++){
                scanf("%c", &map[j][k]);
                if(map[j][k]=='P'){
                    baris_pemain = j;
                    kolom_pemain = k;
                }
            }
        }
        pacmon(baris_pemain, kolom_pemain);
        printf("Case #%d: %d\n", i+1, count);
        //reset semua
        count = 0, baris_pemain=0, kolom_pemain=0;
        for(j=0; j<101; j++){
            for(k=0; k<101; k++){
                map[j][k] = '\0';
            }
        }
        
    }
    return 0;
}