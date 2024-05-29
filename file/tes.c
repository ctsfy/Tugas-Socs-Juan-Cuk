#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Masukkan string: ");
    fgets(str, sizeof(str), stdin);

    // Menghitung panjang string
    int length = strlen(str);

    // Menginisialisasi array untuk menyimpan keberadaan setiap karakter
    int count[256] = {0};

    // Menghitung frekuensi setiap karakter dalam string
    for (int i = 0; i < length; i++) {
        count[str[i]]++;
    }

    // Menampilkan karakter-karakter unik
    printf("Huruf-huruf unik dalam string: ");
    for (int i = 0; i < 256; i++) {
        if (count[i] > 0 && (i >= 'A' && i <= 'Z' || i >= 'a' && i <= 'z')) {
            printf("%c ", i);
        }
    }

    return 0;
}
