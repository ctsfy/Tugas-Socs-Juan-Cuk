#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int left, int right){
    int pivot = arr[right];
    int i = left-1;
    for(int j=left; j<right; j++){
        if(arr[j]<pivot){
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1], &arr[right]);
    return i+1;
}

void quicksort(int arr[], int left, int right){
    if(left<right){
        int idx = partition(arr, left, right);
        quicksort(arr, left, idx-1);
        quicksort(arr, idx+1, right);
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
    quicksort(arr, 0, ukuran-1);


    int anu = 0;
    int b = ukuran/2;
    int matrix[2][b];
    for(j=0; j<2; j++){
        for(k=0; k<b; k++){
            matrix[j][k] = arr[anu];
            anu++;
        }
    }

    int max = 0;
    for(j=0; j<2; j++){
        for(k=0; k<b-1; k++){
            if(max < matrix[j][k+1]-matrix[j][k]){
                max = matrix[j][k+1]-matrix[j][k];
            }
        }
    }
    printf("Case #%d: %d\n", i+1, max);


}
    return 0;
}