#include <stdio.h>

int main() {
    int t, i, j;
    int counter = 0;

    scanf("%d", &t);
    int array[t][t];

    // Membaca elemen-elemen matriks
    for(i = 0; i < t; i++) {
        for(j = 0; j < t; j++) {
            scanf("%d", &array[i][j]);
        }
    }

    // Menghitung kolom dengan setidaknya satu elemen nol
    for(j = 0; j < t; j++) {
        for(i = 0; i < t; i++) {
            if(array[i][j] == 0) {
                counter++;
                break; // Jika ada nol dalam kolom, lanjutkan ke kolom berikutnya
            }
        }
    }

    printf("%d\n", counter);
    return 0;
}
