#include <stdio.h>

int sum(int arr[], int index, int jumlah, int size){
    jumlah+=arr[index];
    if(index==size-1){
        return jumlah;
    }
    sum(arr, index+1, jumlah, size);
}

int main(){
    int t, i, j, k, ukuran;
    scanf("%d", &t);
    for(i=0; i<t; i++){
        scanf("%d", &ukuran);
        int arr[ukuran];
        for(j=0; j<ukuran; j++){
            scanf("%d", &arr[j]);
        }
        int hasil = sum(arr, 0, 0, ukuran);
        printf("Case #%d: %d\n", i+1, hasil);
    }
    return 0;
}