#include <stdio.h>

int main() {
    long long int t = 3, d, p, hasil, i;
    scanf("%lld", &t);
    for(i=0; i<t; i++){
        scanf("%lld %lld", &d, &p);
        hasil = d & (1LL << p);
        if (hasil != 0) {
            printf("1\n");
        } else {
            printf("0\n");
        }
    }
    return 0;
}
