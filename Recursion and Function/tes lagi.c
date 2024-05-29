#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Fungsi untuk menghasilkan fibonacci string ke-n
char* fibonacciString(int n) {
    if (n == 0) {
        return "a";
    } else if (n == 1) {
        return "b";
    } else {
        char *prev1 = fibonacciString(n - 1);
        char *prev2 = fibonacciString(n - 2);

        // Alokasikan memori untuk hasil dan gabungkan dua string sebelumnya
        char *result = (char*)malloc(strlen(prev1) + strlen(prev2) + 1);
        strcpy(result, prev1);
        strcat(result, prev2);

        return result;
    }
}

int main() {
    int n;

    // Minta pengguna untuk memasukkan nilai n
    printf("Masukkan nilai n untuk fibonacci string: ");
    scanf("%d", &n);

    // Periksa apakah n tidak negatif
    if (n < 0) {
        printf("Nilai n harus tidak negatif.\n");
        return 1;  // Keluar dengan kode error
    }

    // Panggil fungsi fibonacciString dan cetak hasilnya
    char *result = fibonacciString(n);
    printf("f(%d) = %s\n", n, result);

    // Bebaskan memori yang dialokasikan
    free(result);

    return 0;
}

