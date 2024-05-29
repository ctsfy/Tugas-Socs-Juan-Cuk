#include <stdio.h>

long long int findLargestIndex(long long int arr[], long long int N, long long int M) {
    long long int largestIndex = -1;
    long long int sum = 0;
    for (long long int i = 0; i < N; i++) {
        sum += arr[i];
        if (sum <= M) {
            largestIndex = i;
        } 
        else if(sum>M && i ==0){
            largestIndex = -2;
            break;
        }
    }
    return largestIndex;
}

int main() {
    long long int N, Q;
    scanf("%lld", &N);
    long long int A[N];
    for (long long int i = 0; i < N; i++) {
        scanf("%lld", &A[i]);
    }
    scanf("%lld", &Q);
    for (long long int testCase = 1; testCase <= Q; testCase++) {
        long long int M;
        scanf("%lld", &M);
        long long int result = findLargestIndex(A, N, M);
        printf("Case #%lld: %lld\n", testCase, result+1);
    }
    return 0;
}