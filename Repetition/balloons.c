#include <stdio.h>
int main(){
long long int ukuran, damage, i, j, counter = 0;
scanf("%lld %lld", &ukuran, &damage);
long long int array[ukuran];
for(i=0; i<ukuran; i++){
    scanf("%lld", &array[i]);
}
for(i=0; i<ukuran; i++){
    if(array[i] < damage){
        counter++;
    }
}
printf("%lld\n", counter);
    return 0;
}