#include <stdio.h>
#include <string.h>

struct data{
    char huruf;
    int jumlah;
};

void swap(struct data *a, struct data *b){
    struct data temp = *a;
    *a = *b;
    *b = temp;
}

int partition(struct data arr[], int left, int right){
    struct data pivot = arr[right];
    int i = left-1;
    for(int j = left; j<right; j++){
        if(arr[j].huruf < pivot.huruf){
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1], &arr[right]);
    return i+1;
}

void quicksort(struct data arr[], int left, int right){
    if(left<right){
        int mid = partition(arr, left, right);
        quicksort(arr, left, mid-1);
        quicksort(arr, mid+1, right);
    }
}

int main(){
    FILE *myfile = fopen("testdata.in", "r");
    int t, i, j, k, ukuran, size;
    char a, b;
    fscanf(myfile, "%d\n", &t);
    char string [t][1001];

    for(i=0; i<t; i++){
        fscanf(myfile, "%s\n", string[i]);
    }

    int size = strlen(string);
    fscanf(myfile, "%d\n", &ukuran);
    struct data alphabet[ukuran];
    int anu = 0;
    for(j=0; j<ukuran; j++){
        int counter = 0;
        fscanf(myfile, "%c %c\n", &a, &b);
        for(k=0; k<size; k++){
            if(string[k] == a){
                counter++;
            }
        }
        alphabet[anu].huruf = b;
        alphabet[anu].jumlah = counter;
        anu++;
    }

    quicksort(alphabet, 0, ukuran-1);

    for(j=0; j<ukuran; j++){
        if(alphabet[j].huruf==alphabet[j+1].huruf){
            alphabet[j].jumlah+=alphabet[j+1].jumlah;
            ukuran--;
        }
    }

    for(j=0; j<ukuran; j++){
        if(alphabet[j].jumlah > 0){
            printf("%c %d\n", alphabet[j].huruf, alphabet[j].jumlah);
        }
    }
fclose(myfile);
    return 0;
}