#include <stdio.h>
int main(){
int t, i, j, ukuran, cari;
scanf("%d", &t);
for(i=0; i<t; i++){
    scanf("%d %d", &ukuran, &cari);
    int arr[ukuran];
    for(j=0; j<ukuran; j++){
        scanf("%d", &arr[j]);
    }
    int counter = 0;
    for(j=0; j<ukuran; j++){
        if(arr[j]>=cari){
            counter++;
        }
    }
    printf("Case #%d: %d\n", i+1, counter);
}
    return 0;
}