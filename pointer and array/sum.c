#include <stdio.h>
int main(){
long long int t, ukuran, i, j, k;
scanf("%lld", &t);
for(i=0; i<t; i++){
    scanf("%lld", &ukuran);
    long long int matrix[ukuran][ukuran];
    for(j=0; j<ukuran; j++){
        for(k=0; k<ukuran; k++){
            scanf("%lld", &matrix[j][k]);
        }
    }
    printf("Case #%lld: ", i+1);
    for(k=0; k<ukuran; k++){
        long long int counter = 0;
        for(j=0; j<ukuran; j++){
            counter+=matrix[j][k];
        }
        if(k == ukuran -1){
            printf("%lld\n", counter);
        }
        else{
            printf("%lld ", counter);
        }
    }
}
    return 0;
}