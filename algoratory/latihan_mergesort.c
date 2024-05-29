#include <stdio.h>

void merge(int arr[], int left, int right) {
    int mid = (left + right) / 2;
    int leftindex = left;
    int rightindex = mid + 1;
    int curr = 0;
    int arrsorted[right - left + 1];

    while (leftindex <= mid && rightindex <= right) {
        if (arr[leftindex] > arr[rightindex]) {
            arrsorted[curr] = arr[rightindex];
            curr++, rightindex++;
        } 
        else{
            arrsorted[curr] = arr[leftindex];
            curr++, leftindex++;
        }
    }

    // masukkan sisa-sisanya :)
    while (leftindex <= mid) {
        arrsorted[curr] = arr[leftindex];
        curr++, leftindex++;
    }
    while (rightindex <= right) {
        arrsorted[curr] = arr[rightindex];
        curr++, rightindex++;
    }
    for (int i = 0; i < curr; i++) {
        arr[left + i] = arrsorted[i];
    }
}

// divide
void mergesort(int arr[], int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;
        mergesort(arr, left, mid);
        mergesort(arr, mid + 1, right);
        merge(arr, left, right);
    }
}

int main() {
    // latihan menggunakan angka
    int arr[] = {4, 3, 5, 9, 10, 12, 34, 1, 13};
    int size = sizeof(arr) / sizeof(int);

    printf("Sebelum disorting:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Setelah disorting:\n");
    mergesort(arr, 0, size - 1);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
