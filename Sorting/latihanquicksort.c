#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int left, int right){
    int pivot = arr[right];
    int i = left - 1;
    for(int j = left; j<right; j++){
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

void printarr(int arr[], int n){
    for(int i = 0; i<n; i++){
        if(i == n-1){
            printf("%d\n", arr[i]);
        }
        else{
            printf("%d ", arr[i]);
        }
    }
}

int main(){
int ukuran, i, j;
scanf("%d", &ukuran);
int array[ukuran];
for(i=0; i<ukuran; i++){
    scanf("%d", &array[i]);
}
quicksort(array, 0, ukuran-1);
printarr(array, ukuran);
    return 0;
}