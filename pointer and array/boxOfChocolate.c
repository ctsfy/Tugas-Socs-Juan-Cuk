#include <stdio.h>
int main() {
    long long int t, anak, ukuran, i, j, k;
    scanf("%lld", &t);
    for(i = 0; i < t; i++) {
        scanf("%lld %lld", &anak, &ukuran);
        long long int array[anak][ukuran];
        long long int sum = 0;
        for(j = 0; j < anak; j++) {
            long long int max = -1;
            for(k = 0; k < ukuran; k++) {
                scanf("%lld", &array[j][k]);
                if(max < array[j][k]) {
                    max = array[j][k];
                }
            }
            sum += max;
        }
        printf("Case #%lld: %lld\n", i + 1, sum);
    }
    return 0;
}