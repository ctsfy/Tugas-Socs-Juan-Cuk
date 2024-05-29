#include <stdio.h>
int main(){
long long int t, ukuran, i, j, k;
scanf("%lld", &t);
for(i=0; i<t; i++){
    scanf("%lld", &ukuran);
    long long int array[ukuran];
    long long int counter = 0;
    for(j=0; j<ukuran; j++){
        scanf("%lld", &array[j]);
    }
    
    long long int max1 = 0;
    long long int max2 = 0;

    for(j=0; j<ukuran; j++){
        if(array[j] > max1){
            max1 = array[j];
        }
    }

    for(j=0; j<ukuran; j++){
        if(array[j] == max1){
            counter++;
        }
    }

    if(counter == 1){
        for(j=0; j<ukuran; j++){
            if(array[j] > max2 && array[j] != max1){
                max2 = array[j];
            }
        }
    }
    else if(counter > 1){
        max2 = max1;
    }

    printf("Case #%lld: %lld\n", i+1, max1+max2);
}
    return 0;
}