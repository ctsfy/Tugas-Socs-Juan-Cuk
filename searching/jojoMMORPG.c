#include <stdio.h>

void swap(long long int *a, long long int *b){
    long long int temp = *a;
    *a = *b;
    *b = temp;
}

long long int partition(long long int arr[], long long int left, long long int right){
    long long int pivot = arr[right];
    long long int i = left-1;
    for(long long int j=left; j<right; j++){
        if(arr[j]<pivot){
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1], &arr[right]);
    return i+1;
}

void quicksort(long long int arr[], long long int left, long long int right){
    if(left<right){
        long long int mid = partition(arr, left, right);
        quicksort(arr, left, mid-1);
        quicksort(arr, mid+1, right);
    }
}

int main(){
long long int ukuran, i, j, power;
scanf("%lld", &ukuran);
long long int arr[ukuran];
for(i=0; i<ukuran; i++){
    scanf("%lld", &arr[i]);
}

quicksort(arr, 0, ukuran-1);

scanf("%lld", &power);

long long int counter = 0;
for(i=0; i<ukuran; i++){
    if(power>=arr[i]){
        power-=arr[i];
        counter++;
    }
    else{
        break;
    }
}
printf("%lld\n", counter);
    return 0;
}