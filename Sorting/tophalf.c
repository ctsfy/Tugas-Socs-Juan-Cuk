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
		if(arr[j] < pivot){
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i+1], &arr[right]);
	return i+1;
}

void quicksort(int arr[], int left, int right){
	if(left < right){
		//kondisi masih benar
		int new_corrected_idx = partition(arr, left, right);
		quicksort(arr, left, new_corrected_idx-1);
		quicksort(arr, new_corrected_idx+1, right);
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
int arr[ukuran];
for(i=0; i<ukuran; i++){
    scanf("%d", &arr[i]);
}

quicksort(arr, 0, ukuran-1);

int middle_idx = ukuran/2;
int anu = ukuran/2;
int hasilganjil[middle_idx];
int hasilgenap[middle_idx-1];

if(ukuran%2 == 1){
        for(i = 0; i<middle_idx; i++){
            hasilganjil[i] = arr[anu+1];
            anu++;
    }
    printarr(hasilganjil, middle_idx);
}

else if(ukuran%2 == 0){
    for(i = 0; i<middle_idx-1; i++){
            hasilgenap[i] = arr[anu+1];
            anu++;
    }
    printarr(hasilgenap, middle_idx-1);
}

    return 0;
}