#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct mhs{
    char nim[11];
    char nama[21];
};

void swap(struct mhs *a, struct mhs *b){
    struct mhs temp = *a;
    *a = *b;
    *b = temp;
}

void sort(struct mhs arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(strcmp(arr[j].nim, arr[j+1].nim)>0){
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

void print(struct mhs arr[], int n){
    for(int i=0; i<n; i++){
        printf("%s %s\n", arr[i].nim, arr[i].nama);
    }
}

int main(){
FILE *myfile = fopen("testdata.in", "r");
int jumlahdata;
int i = 0;
fscanf(myfile, "%d", &jumlahdata);
struct mhs mahasiswa[jumlahdata+1];
while(!feof(myfile)){
    fscanf(myfile, "%s %s\n", mahasiswa[i].nim, mahasiswa[i].nama);
    i++;
}

fclose(myfile);
sort(mahasiswa, i);
print(mahasiswa, i);
return 0;
}