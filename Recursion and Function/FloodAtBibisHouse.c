#include <stdio.h>

void floodfill(int baris, int kolom, char matrix[baris+1][kolom+1], int a, int b){
    if (a >= 0 && a < baris && b >= 0 && b < kolom && matrix[a][b] == '.'){
        matrix[a][b] = 'S';
        floodfill(baris, kolom, matrix, a - 1, b); // atas
        floodfill(baris, kolom, matrix, a + 1, b); // bawah
        floodfill(baris, kolom, matrix, a, b + 1); // kanan
        floodfill(baris, kolom, matrix, a, b - 1); // kiri
    }
    
}

int main() {
    int t, i, j, k, baris, kolom;
    scanf("%d", &t);
    for (i = 0; i < t; i++) {
        scanf("%d %d", &baris, &kolom);
        char matrix[baris+1][kolom+1];
        for (j = 0; j < baris; j++) {
            for (k = 0; k < kolom; k++) {
                scanf(" %c", &matrix[j][k]);
            }
        }

        int baris_s, kolom_s;
        for (j = 0; j < baris; j++) {
            for (k = 0; k < kolom; k++) {
                if (matrix[j][k] == 'S') {
                    baris_s = j;
                    kolom_s = k;
                    matrix[j][k] = '.';
                    break;
                }
            }
        }
        floodfill(baris, kolom, matrix, baris_s, kolom_s);
        int counter_s = 0;
        for (j = 0; j < baris; j++) {
            for (k = 0; k < kolom; k++) {
                if(matrix[j][k] =='S'){
                    counter_s++;
                }
            }
        }
        printf("Case #%d: %d\n", i+1, counter_s-1);
    }
    return 0;
}
