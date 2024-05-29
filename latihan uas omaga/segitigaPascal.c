#include <stdio.h>

// Fungsi untuk menghitung nilai binomial coefficient C(n, k)
int binomialCoefficient(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    } else {
        return binomialCoefficient(n - 1, k - 1) + binomialCoefficient(n - 1, k);
    }
}

// Fungsi untuk menampilkan Segitiga Pascal hingga baris ke-n
void printPascalTriangle(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", binomialCoefficient(i, j));
        }
        printf("\n");
    }
}

int main() {
    int n;

    // Input jumlah baris (n)
    printf("Masukkan jumlah baris Segitiga Pascal: ");
    scanf("%d", &n);

    // Menampilkan Segitiga Pascal
    printPascalTriangle(n);

    return 0;
}
