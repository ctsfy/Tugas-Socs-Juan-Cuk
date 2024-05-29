#include <stdio.h>
#include <string.h>
int main(){
long long int a, ukuran, k, i, j;
scanf("%lld", &a); getchar();
for(i=0; i<a; i++){
    scanf("%lld %lld", &ukuran, &k);
    char kata[ukuran+1];
    getchar();
    scanf("%s", kata);
    long long int length = strlen(kata);
    printf("Case #%lld: ", i+1);
    for(j=0; j<length; j++){
        kata[j] = (kata[j] + k - 97)%26 + 97;
        if(j==length-1){
            printf("%c\n", kata[j]);
        }
        else{
            printf("%c", kata[j]);
        }
    }
}
    return 0;
}