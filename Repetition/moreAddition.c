#include <stdio.h>
int main() {
int t, i, j, k, counter = 0;
scanf("%d", &t);
for (i = 0; i <= t; i++) {
    for (j = 0; j <= t - i; j++) {
        k = t - i - j;
        if (k >= 0) {
            counter++;
        }
        printf("%d %d %d\n", i, j, k);
    }
}
printf("%d\n", counter);
return 0;
}
