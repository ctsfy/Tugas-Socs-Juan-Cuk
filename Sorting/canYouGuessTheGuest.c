#include <stdio.h>

void merge(long long int arr[], long long int left, long long int right){
    long long int mid = left+(right-left)/2;
    long long int cur = 0;
    long long int leftindex = left;
    long long int rightindex = mid+1;
    long long int temp[right-left+1];

    while(leftindex<=mid && rightindex<=right){
        if(arr[leftindex]>arr[rightindex]){
            temp[cur] = arr[rightindex];
            cur++;
            rightindex++;
        }
        else{
            temp[cur] = arr[leftindex];
            cur++;
            leftindex++;
        }
    }
    while(leftindex<=mid){
        temp[cur] = arr[leftindex];
        cur++;
        leftindex++;
    }
    while(rightindex<=right){
        temp[cur] = arr[rightindex];
        cur++;
        rightindex++;
    }
    for(int i = 0; i<cur; i++){
        arr[left+i] = temp[i];
    }
}

void mergesort(long long int arr[], long long int left, long long int right){
    if(left<right){
        long long int mid = left+(right-left)/2;
        mergesort(arr, left, mid);
        mergesort(arr, mid+1, right);
        merge(arr, left, right);
    }
    
}


int main(){
long long int t, i, j, k;
scanf("%lld", &t);
for(i=0; i<t; i++){
    long long int arr[25];
    long long int hasil[5];

    for(j=0; j<25; j++){
        scanf("%lld", &arr[j]);
    }
    mergesort(arr, 0, 24);
    hasil[0] = arr[0]/2;
    hasil[4] = arr[24]/2;
    hasil[1] = arr[1] - hasil[0];
    hasil[3] = arr[23] - hasil[4];
    if (arr[3] == arr[4]){
        hasil[2] = arr[3] - hasil[0];
	}
    else if (arr[3] == hasil[1] * 2){
        hasil[2] = arr[4] - hasil[0];
	}
    else if (arr[4] == hasil[1] * 2){
        hasil[2] = arr[3] - hasil[0];
	}

    printf("Case #%lld: %lld %lld %lld %lld %lld\n", i+1, hasil[0], hasil[1], hasil[2], hasil[3], hasil[4]);


}
    return 0;
}