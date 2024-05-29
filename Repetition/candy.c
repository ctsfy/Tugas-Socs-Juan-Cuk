#include <stdio.h>

int main() {
    long long int a, b, i, j, ukuran;

    scanf("%lld", &a);
    for (i = 0; i < a; i++) {
        scanf("%lld %lld", &ukuran, &b);
        long long int array[ukuran];
        for (j = 0; j < ukuran; j++) {
            scanf("%lld", &array[j]);
        }
        long long int min = array[0];
        for (j = 0; j < ukuran; j++) {
            if (array[j] < min) {
                min = array[j];
            }
        }
        if (b < min) {
            min = b;
            b = 0;
        }
        printf("Case #%lld: %lld\n", i + 1, b/min);
    }
    return 0;
}