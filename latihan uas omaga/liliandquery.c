#include <stdio.h>

long long int binarysearch(long long int arr[], long long int left, long long int right, long long int target){
    while(left<=right){
        int mid = left + (right - left)/2;
        if(arr[mid] == target){
            while (mid > 0 && arr[mid - 1] == target) {
                mid--;
            }
            return mid+1;
        }
        else if(arr[mid] > target){
            right = mid-1;
        }
        else{
            left = mid+1;
        }
    }
    return -1;
}


int main(){
long long int ukuran, jumlah_target, target;
scanf("%lld %lld", &ukuran, &jumlah_target);
long long int arr[ukuran];

for(int i = 0; i < ukuran; i++){
    scanf("%lld", &arr[i]);
}

for(int i = 0; i < jumlah_target; i++){
    scanf("%lld", &target);
    long long int hasil = binarysearch(arr, 0, ukuran-1, target);
    printf("%lld\n", hasil);
}
    return 0;
}