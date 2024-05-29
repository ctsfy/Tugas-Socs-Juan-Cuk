#include <stdio.h>
#include <string.h>

void bubbleSort(char arr[][10001], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(arr[j], arr[j + 1]) < 0) {
                char temp[10001];
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }
}

void sortstring(char arr[100001], int n){
    for(int i =0; i<n; i++){
        for(int j = 0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                char temp;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int row, ukuran, i;

    // Input the number of strings and their length
    scanf("%d %d", &row, &ukuran);

    char kata[row][10001];

    // Input the strings
    for (i = 0; i < row; i++) {
        scanf("%s", kata[i]);
        sortstring(kata[i], ukuran);
    }

    // Sort the strings using bubble sort
    bubbleSort(kata, row);

    // Print the sorted strings
    for (i = 0; i < row; i++) {
        printf("%s\n", kata[i]);
    }

    return 0;
}
