#include <stdio.h>

int main(){
long long int ukuran, i, sum = 0;
scanf("%lld", &ukuran);
long long int array[ukuran];
for(i=0; i<ukuran; i++){
    scanf("%lld", &array[i]);
    if(array[i] >= 0){
        sum+=array[i];
    }
}
printf("%lld\n", sum);
    return 0;
}