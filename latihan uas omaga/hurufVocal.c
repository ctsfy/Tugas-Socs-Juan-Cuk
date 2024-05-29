#include <stdio.h>
#include <string.h>
struct kata{
    char word[101];
    int vokal;
};


void merge(struct kata arr[], int left, int right){
    int mid = left + (right-left)/2;
    int leftindex = left;
    int rightindex = mid+1;
    int cur = 0;
    struct kata sorted[right-left+1];

    while(leftindex<=mid && rightindex<=right){
        if(arr[leftindex].vokal > arr[rightindex].vokal){
            sorted[cur] = arr[rightindex];
            cur++, rightindex++;
        }
        else if(arr[leftindex].vokal < arr[rightindex].vokal){
            sorted[cur] = arr[leftindex];
            cur++, leftindex++;
        }
        else if(arr[leftindex].vokal == arr[rightindex].vokal){
            if(strcmp(arr[leftindex].word, arr[rightindex].word)>0){
                sorted[cur] = arr[rightindex];
                cur++, rightindex++;
            }
            else{
                sorted[cur] = arr[leftindex];
                cur++, leftindex++;
            }
        }
    }

    while(leftindex<=mid){
        sorted[cur] = arr[leftindex];
        cur++, leftindex++;
    }
    while(rightindex<=right){
        sorted[cur] = arr[rightindex];
        cur++, rightindex++;
    }
    for(int i = 0; i<cur; i++){
        arr[i+left] = sorted[i];
    }
}

void mergesort(struct kata arr[], int left, int right){
    if (left<right){
        int mid = left + (right-left)/2;
        mergesort(arr, left, mid);
        mergesort(arr, mid+1, right);
        merge(arr, left, right);
    }
}

int main(){
int n, m;
scanf("%d %d", &n, &m);

struct kata minggu[n];

for(int i = 0; i<n; i++){
    scanf("%s", &minggu[i].word);
}


for(int i = 0; i<n; i++){
    minggu[i].vokal = 0;
    for(int j = 0; j<m; j++){
        if(minggu[i].word[j] == 'a' || minggu[i].word[j] == 'i' || minggu[i].word[j] == 'o' || minggu[i].word[j] == 'u' || minggu[i].word[j] == 'e'){
            minggu[i].vokal++;
        }
    }
}
mergesort(minggu, 0, n-1);

for(int i = 0; i<n; i++){
    printf("%s\n", minggu[i].word);
}


    return 0;
}