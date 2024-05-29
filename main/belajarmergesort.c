#include <stdio.h>

void merge(int arr[], int left, int right){
    int mid = left + (right-left)/2;
    int leftindex = left;
    int rightindex = mid+1;
    int temp[right-left+1];
    int cur = 0;

    while(leftindex<=mid && rightindex<=right){
        if(arr[leftindex]>arr[rightindex]){
            temp[cur] = arr[rightindex];
            cur++, rightindex++;
        }
        else{
            temp[cur] = arr[leftindex];
            cur++, leftindex++;
        }
    }

    while(leftindex<=mid){
        temp[cur] = arr[leftindex];
        cur++, leftindex++;
    }
    while(rightindex<=right){
        temp[cur] = arr[rightindex];
        cur++, rightindex++;
    }
    for(int i = 0 ;  i<cur; i++){
        arr[left+i] = temp[i];
    }
}

void mergesort(int arr[], int left, int right){
    if(left<right){
        int mid = left + (right-left)/2;
        mergesort(arr, left, mid);
        mergesort(arr, mid+1, right);
        merge(arr, left, right);
    }
}

int binarysearch(int arr[], int left, int right, int target){
    while(left<=right){
        int mid = left + (right-left)/2;
        if(arr[mid] == target){
            return mid + 1;
        }
        else if(arr[mid] > target){
            right = mid-1;
        }
        else{
            left = mid + 1;
        }
    }
    return -1;
}

void printarr(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}

int main(){
int arr[] = {37, 7, 99, 101, 48, 1, 777, 3, 27, 98};
int size = sizeof(arr)/sizeof(int);
printf("Sebelum disort:\n");
printarr(arr, size);
printf("\nSetelah disortir:\n");
mergesort(arr, 0, size-1);
printarr(arr,size);
printf("\n");
int target;
scanf("%d", &target);

int hasil = binarysearch(arr, 0, size-1, target);
printf("Angka %d terletak pada index ke-%d\n", target, hasil);
    return 0;
}