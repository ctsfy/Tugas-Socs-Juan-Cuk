#include <stdio.h>
int main(){
int t, i, j, k, ukuran, waktu;
scanf("%d", &t);
for(i=0; i<t; i++){
    scanf("%d %d", &ukuran, &waktu);
    int arr[ukuran];

    for(j=0; j<ukuran; j++){
        scanf("%d", &arr[j]);
    }

    int counter = 0;
    for(j=0; j<ukuran; j++){
        for(k=0; k<ukuran-j-1; k++){
            if(arr[k]>arr[k+1]){
                int temp = arr[k];
                arr[k] = arr[k+1];
                arr[k+1] = temp;
                counter+=waktu;
            }
        }
    }

    printf("Case #%d: %d\n", i+1, counter);
}
    return 0;
}