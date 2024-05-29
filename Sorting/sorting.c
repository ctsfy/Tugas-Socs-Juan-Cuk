#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int left, int right){
    int pivot = arr[right];
    int i = left-1;
    for(int j = left; j<right; j++){
        if(arr[j]<pivot){
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1], &arr[right]);
    return i+1;
}

void sort(int arr[], int left, int right){
    if(left<right){
        int idx = partition(arr, left, right);
        sort(arr, left, idx-1);
        sort(arr, idx+1, right);
    }
}

int main(){
int ukuran, i, j;
scanf("%d", &ukuran);
int arr[ukuran];
for(i=0; i<ukuran; i++){
    scanf("%d", &arr[i]);
}

sort(arr, 0, ukuran-1);

int counter = 0;
int max = 0;
for(i=0; i<ukuran-1; i++){
    if(max <= arr[i+1]-arr[i]){
        max = arr[i+1]-arr[i];
    }
}

for(i=0; i<ukuran-1; i++){
    if(max == arr[i+1]-arr[i]){
        counter++;
    }
}

int hasil[counter*2];
int a = 0;

for(i=0; i<ukuran-1; i++){
    if(max == arr[i+1]-arr[i]){
        hasil[a] = arr[i];
        hasil[a+1] = arr[i+1];
        a+=2;
    }
}

for(i=0; i<counter*2; i++){
    if(i==(counter*2)-1){
        printf("%d\n", hasil[i]);
    }
    else{
        printf("%d ", hasil[i]);
    }
}

    return 0;
}