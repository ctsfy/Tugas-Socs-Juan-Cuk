#include <stdio.h>
#include <string.h>

void generateFibonacciStrings(int n) {
    char first= 'A';
    char second= 'B';
    char result[100]; // Menyimpan hasil urutan string Fibonacci
    printf("Fibo String 1: %s\n", first);
    printf("Fibo String 2: %s\n", second);
    
    for (int i = 3; i <= n; i++) {
        strcpy(result, second);
        strcat(result, first);
        printf("Fibo String %d: %s\n", i, result);
        strcpy(first, second);
        strcpy(second, result);
    }
}

int main() {
    int n;
    printf("Masukkan jumlah Fibo String yang ingin di-generate: ");
    scanf("%d", &n);
    
    generateFibonacciStrings(n);
    return 0;
}





