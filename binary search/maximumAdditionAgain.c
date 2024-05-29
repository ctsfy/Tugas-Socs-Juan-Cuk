#include <stdio.h>
int main(){
long long int t, i, j, k, ukuran, max;
scanf("%lld", &ukuran);
long long int arr[ukuran];
long long int hasil[ukuran];
for(j=0; j<ukuran; j++){
    scanf("%lld", &arr[j]);
}
scanf("%lld", &t);
for(i=0; i<t; i++){
    scanf("%lld", &max);
    long long int hasil = 0;
        long long int counter = 0;
        j = 0;
        k = 0;
        while (k < ukuran) {
            if (counter + arr[k] <= max) {
                counter += arr[k];
                k++;
                hasil = (k - j) > hasil ? (k - j) : hasil;
            } else {
                counter -= arr[j];
                j++;
            }
        }

        printf("Case #%lld: %lld\n", i + 1, hasil);
}
    return 0;
}