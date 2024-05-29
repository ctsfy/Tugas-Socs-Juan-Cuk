#include <stdio.h>

void tambahPerElemen(int a, int b) {
    int result = 0;
    int multiplier = 1;

    while (a > 0 || b > 0) {
        int digitA = a % 10;
        int digitB = b % 10;

        int sum = digitA + digitB;
        int digitResult = sum % 10;

        result = result + digitResult * multiplier;
        multiplier *= 10;

        a /= 10;
        b /= 10;
    }

    printf("%d\n", result);
}

int main() {
    int angka1, angka2;

    printf("Masukkan angka pertama: ");
    scanf("%d", &angka1);

    printf("Masukkan angka kedua: ");
    scanf("%d", &angka2);

    tambahPerElemen(angka1, angka2);

    return 0;
}







