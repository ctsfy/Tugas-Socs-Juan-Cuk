#include <stdio.h>

int main(){
int t, i, j, k, max, a , b;
scanf("%d", &t);
for(i=0; i<t; i++){
    scanf("%d %d", &a, &b);
    printf("Case #%d: ", i+1);
    int hasil = 0;
    int kali = 1;
    while (a > 0 || b > 0) {
        int A = a % 10;
        int B = b % 10;
        int sum = A + B;
        int Result = sum % 10;
        hasil = hasil + Result * kali;
        kali *= 10;
        a /= 10;
        b /= 10;
    }
    printf("%d\n", hasil);
}
    return 0;
}