#include <stdio.h>

void tree(int arr[], int index, int size, int sum){
    if(size>index){
        sum += arr[index];
        if(size<=2*index+1 && size <=2*index+2){
            printf("%d\n", sum);
            return;
        }
        tree(arr, 2*index+1, size, sum);
        tree(arr, 2*index+2, size, sum);
    }
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
    printf("Case #%d:\n", i+1);
    tree(arr, 0, ukuran, 0);
}
    return 0;
}