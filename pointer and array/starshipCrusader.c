#include <stdio.h>
int main(){
long long int t, ukuran, i, j;
scanf("%lld", &t);
for(i=0; i<t; i++){
    scanf("%lld", &ukuran);
    long long int hasil[ukuran];
    long long int uji[ukuran];
    for(j=0; j<ukuran; j++){
        scanf("%lld", &hasil[j]);
    }
    for(j=0; j<ukuran; j++){
        scanf("%lld", &uji[j]);
    }
    long long int counter = 0;
    for(j=0; j<ukuran; j++){
        if(hasil[j]<uji[j]){
            counter++;
        }
    }
    printf("Case #%lld: %lld\n", i+1, counter);

}
    return 0;
}