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
		int new_corrected_idx = partition(arr, left, right);
		quicksort(arr, left, new_corrected_idx-1);
		quicksort(arr, new_corrected_idx+1, right);
	}
}

void printarr(int arr[], int ukuran){
    for(int i=0; i<ukuran; i++){
        printf("%d ", arr[i]);
    }
}

int main(){
int t, ukuran, i, j, k, cari, z = -1;
scanf("%d", &t);

for(i=0; i<t; i++){

    scanf("%d", &ukuran);
    int arr[ukuran];

    for(j=0; j<ukuran; j++){
        scanf("%d", &arr[j]);
    }

    quicksort(arr, 0, ukuran-1);
    
    scanf("%d", &cari);
    
    int flag = 0;
    int a;
    
    for(j=0; j<ukuran; j++){
        if (cari == arr[j]){
            flag = 1;
            a = j;
            break;
        }
    }
    
    if(flag == 1 && a ==ukuran-1){
        printf("CASE #%d: %d %d\n", i+1, arr[a-1], arr[a]);
    }
    else if(flag == 1 && a >= 0 && a < ukuran-1){
        printf("CASE #%d: %d %d\n", i+1, arr[a], arr[a+1]);
    }
    else{
        printf("CASE #%d: -1 -1\n", i+1);
    }
}
    return 0;
}