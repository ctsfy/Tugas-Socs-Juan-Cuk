#include <stdio.h>
#include <math.h>
int main(){
long long int t, rumah, i, j;
scanf("%lld", &t);
for(i=0; i<t; i++){
    scanf("%lld", &rumah);
    long long int array[rumah];
    for(j=0; j<rumah; j++){
        scanf("%lld", &array[j]);
    }
    long long int arraybaru[rumah-1];
    for(j=0; j<rumah-1; j++){
        arraybaru[j] = abs(array[j] - array[j+1]);
    }
    long long int minimum = arraybaru[0];
    for(j=0; j<rumah-1; j++){
        if(arraybaru[j] < minimum){
            minimum = arraybaru[j];
        }
    }
    printf("Case #%lld: %lld\n", i+1, minimum);
}
    return 0;
}