#include <stdio.h>
int main(){
long long int t, i, n, halaman;
scanf("%lld", &t);
for(i=0; i<t; i++){
    scanf("%lld %lld", &halaman, &n);
    printf("Case #%lld: ",i+1);
    long long int halamanpertama = 1;
    long long int halamanterakhir = halaman;

    if(halamanterakhir%2==0){
        halamanterakhir++;
    }
    if(n%2==0){
        n++;
    }

    long long int jawaban1 = (n-1)/2;
    long long int jawaban2 = (halamanterakhir - n)/2;

    if(jawaban1>=jawaban2){
        printf("%lld\n", jawaban2);
    }
    else{
        printf("%lld\n", jawaban1);
    }
}
    return 0;
}