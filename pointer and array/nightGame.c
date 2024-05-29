#include <stdio.h>
int main(){
long long int t, ukuran, i, j, k; 
scanf("%d", &t);
for(i=0; i<t; i++){
    scanf("%d", &ukuran);
    long long int array[ukuran], balik[ukuran];
    for(j=0; j<ukuran; j++){
        scanf("%d", &array[j]);
    }
    //balikin cuy
    printf("Case #%d: ", i+1);
    for(k=ukuran-1; k>=0; k--){
        balik[k] = array[k];
        if(k==0){
            printf("%d\n", balik[k]);
        }
        else{
            printf("%d ", balik[k]);
        }
    }
}
    return 0;
}