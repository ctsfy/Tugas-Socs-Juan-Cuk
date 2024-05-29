#include <stdio.h>

long long int binarysearch(long long int arr[], long long int low, long long int high, long long int target){
    long long int hasil = -1;
    while(low<=high){
        long long int mid = low + (high-low)/2;
        if(arr[mid] <= target){
            low = mid+1;
            hasil = mid;
        }
        else{
            high = mid - 1;
        }
    }
    return hasil;
}


int main(){
long long int ukuran, i, j, k, ubah, target;
scanf("%lld", &ukuran);

long long int arr[ukuran];
long long int tambah[ukuran];
for(i=0; i<ukuran; i++){
    scanf("%lld" ,&arr[i]);
}

for(i=0; i<ukuran; i++){
    tambah[i] = 0;
}

for(i=0; i<ukuran; i++){
    if(i==0){
        tambah[i] = arr[0];
    }
    else{
        tambah[i] = arr[i] + tambah[i-1];
    }
}

scanf("%lld", &ubah);
for(i=0; i<ubah; i++){
    scanf("%lld", &target);
    int result = binarysearch(tambah, 0, ukuran-1, target);
    if(result == -1){
        printf("Case #%lld: -1\n", i+1);
    }
    else{
        printf("Case #%lld: %lld\n", i+1, result+1);
    }
}
    
    
    return 0;
}