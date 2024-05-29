#include <stdio.h>
int main(){
long long int ukuran, i, j, count = 0;
scanf("%lld", &ukuran);
long long int array[ukuran];
for(i=0; i<ukuran; i++){
    scanf("%lld", &array[i]);
}

for(i = 0; i < ukuran; i++) {
    long long int unik = 1;
    for(j = 0; j < i; j++) {
        if(array[i] == array[j]) {
            unik = 0;
            break;
        }
    }
    if(unik) {
        count++;
    }
}

printf("%lld\n", count);
    return 0;
}