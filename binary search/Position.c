#include <stdio.h>

int binarysearch(int arr[], int left, int right ,int target){
    while(left<=right){
        int mid = (left+right)/2;
        if(arr[mid] == target){
            if(arr[mid] == arr[mid-1] && arr[mid-1] == target){
                right = mid-1;
            }
            else if(arr[mid]!=arr[mid-1]){
                return mid+1;
            }
        }
        else if (arr[mid] > target){
            right = mid-1;
        }
        else{
            left = mid+1;
        }
    }
    return -1;
}

int main(){
int ukuran, ubah, i, j, k;
scanf("%d %d", &ukuran, &ubah);
int arr[ukuran];
int array[ubah];
for(i=0; i<ukuran; i++){
    scanf("%d", &arr[i]);
}
for(i=0; i<ubah; i++){
    scanf("%d", &array[i]);
}
for(i=0; i<ubah; i++){
    int hasil = binarysearch(arr, 0, ukuran-1, array[i]);
    if(hasil!=-1){
        printf("%d\n", hasil);
    }
    else{
        printf("-1\n");
    }
}
    return 0;
}