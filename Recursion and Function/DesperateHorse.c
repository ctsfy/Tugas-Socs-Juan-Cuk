#include <stdio.h>

char map[9][9];
int minMoves;

void kuda(int baris, int kolom, int row, int column, int n){
    if(map[baris][kolom] == '#' || map[baris][kolom] == '\0' || map[baris][kolom] == '\n' || baris<0 || baris > 7
    || kolom < 0 || kolom > 7 || n>minMoves){
        return;
    }
    
    if(baris == row && kolom == column){
        if (n < minMoves)
            minMoves = n;
        return;
    }
    
    kuda(baris+2, kolom-1, row, column, n+1);
    kuda(baris+1, kolom-2, row, column, n+1);
    kuda(baris-2, kolom-1, row, column, n+1);
    kuda(baris-1, kolom-2, row, column, n+1);
    kuda(baris+2, kolom+1, row, column, n+1);
    kuda(baris+1, kolom+2, row, column, n+1);
    kuda(baris-2, kolom+1, row, column, n+1);
    kuda(baris-1, kolom+2, row, column, n+1);
}

int main(){
    int t, i, j, langkah;
    int y1, y2;
    char x1, x2;
    scanf("%d", &t);
    for (i = 0; i < t; i++) {
        scanf(" %c %d", &x1, &y1);
        scanf(" %c %d", &x2, &y2);

        int blackrow = x1 - 'A';
        int blackcolumn = y1 - 1;
        int targetrow = x2 - 'A';
        int targetcolumn = y2 - 1;

        for (j = 0; j < 8; j++) {
            for (int k = 0; k < 8; k++) {
                map[j][k] = '.';
            }
        }
        minMoves = 6;
        kuda(blackrow, blackcolumn, targetrow, targetcolumn, 0);
        printf("Case #%d: %d\n", i+1, minMoves);

        for (j = 0; j < 8; j++) {
            for (int k = 0; k < 8; k++) {
                map[j][k] = '\0';
            }
        }
        minMoves = 0;
    }
    return 0;
}