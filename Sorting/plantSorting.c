#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct tanaman{
    long long int angka;
    char jenis[41];
};

void swap(struct tanaman *a, struct tanaman *b){
    struct tanaman temp = *a;
    *a = *b;
    *b = temp;
}

void sort(struct tanaman arr[], long long int n){
    for(long long int i=0; i<n; i++){
        for(long long int j=0; j<n-i-1; j++){
            if(strcmp(arr[j].jenis, arr[j+1].jenis)>0){
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

void print(struct tanaman arr[], long long int n){
    for(long long int i=0; i<n; i++){
        printf("%lld %s\n", arr[i].angka, arr[i].jenis);
    }
}

int main(){
FILE *myfile = fopen("testdata.in", "r");
int jumlahdata;
long long int i = 0;
fscanf(myfile, "%d", &jumlahdata);
struct tanaman plant[jumlahdata+1];
while(!feof(myfile)){
    fscanf(myfile, "%lld#%[^\n]\n", &plant[i].angka, &plant[i].jenis);
    i++;
}

fclose(myfile);
sort(plant, i);
print(plant, i);
return 0;
}