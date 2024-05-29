#include <stdio.h>
#include <string.h>
struct mahasiswa{
    char nim[11];
    char nama[21];
};

void merge(struct mahasiswa arr[], int left, int right){
    int mid = (right+left)/2;
    int leftindex = left;
    int rightindex = mid+1;
    int curr = 0;
    struct mahasiswa arrsorted[right-left+1];

    
    while(leftindex<=mid && rightindex<=right){
        if(strcmp(arr[leftindex].nama, arr[rightindex].nama)>0){
            arrsorted[curr] = arr[rightindex];
            curr++, rightindex++;
        }
        else if(strcmp(arr[leftindex].nama, arr[rightindex].nama)==0){
            if(strcmp(arr[leftindex].nim, arr[rightindex].nim)>0){
                arrsorted[curr] = arr[rightindex];
                curr++, rightindex++;
            }
            else{
                arrsorted[curr] = arr[leftindex];
                curr++, leftindex++;
            }
        }
        else{
            arrsorted[curr] = arr[leftindex];
            curr++, leftindex++;
        }
    }

    //masukin semuanya
    while(leftindex<= mid){
        arrsorted[curr] = arr[leftindex];
        curr++, leftindex++;
    }
    while(rightindex<= right){
        arrsorted[curr] = arr[rightindex];
        curr++, rightindex++;
    }
    for(int i = 0; i<curr; i++){
        arr[left+i] = arrsorted[i]; 
    }
}

void mergesort(struct mahasiswa arr[], int left, int right){
    if(left<right){
        int mid = (right+left)/2;
        mergesort(arr, left, mid);
        mergesort(arr, mid+1, right);
        merge(arr, left, right);
    }
}


int binarysearch(struct mahasiswa arr[], int left, int right, char target[]){
    while(left<=right){
        int mid = (right+left)/2;
        if(strcmp(arr[mid].nama, target)==0){
            return mid;
        }
        else if(strcmp(arr[mid].nama, target)>0){
            right = mid-1;
        }
        else{
            left = mid + 1;
        }
    }
    return -1;
}

int main(){
FILE *myfile = fopen("testdata.in", "r");
int ukuran, i, j, k;
fscanf(myfile, "%d\n", &ukuran);
struct mahasiswa stud[ukuran];
for(i=0; i<ukuran; i++){
    fscanf(myfile, "%s %s\n", &stud[i].nim, &stud[i].nama);
}
mergesort(stud, 0, ukuran-1);
printf("Hallo, nama siapa yang anda mau cari?\n");
char target[101];
scanf("%s", &target);
int hasil = binarysearch(stud, 0, ukuran-1, target);
if(hasil!=-1){
    printf("Nama: %s\nNIM: %s\n", stud[hasil].nama, stud[hasil].nim);
}
else{
    printf("Nama tidak ditemukan.\n");
}

    return 0;
}