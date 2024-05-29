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

int search(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid; 
        } 
        else if (arr[mid] < target) {
            left = mid + 1;
        } 
        else {
            right = mid - 1;
        }
    }
    return -1;
}

int main(){
    int ukuran, i, j, k, dicari;

    scanf("%d", &ukuran);
    int arr[ukuran];
    for(i=0; i<ukuran; i++){
        scanf("%d", &arr[i]);
    }

    quicksort(arr, 0, ukuran-1);

    scanf("%d", &dicari);
    int cari[dicari];
    for(i=0; i<dicari; i++){
        scanf("%d", &cari[i]);
    }

    for(i=0; i<dicari; i++){
        int hasil = search(arr, 0, ukuran-1, cari[i]);
        if(hasil!=-1){
            printf("%d\n", hasil+1);
        }
        else{
            printf("-1\n");
        }
    }
    return 0;
}