#include <stdio.h>
#include <string.h>
struct siswa{
    char nim[11];
    char nama[21];
};

int search(struct siswa arr[], int left, int right, char target[]){
    while(left<=right){
        int mid = left + (right-left)/2;
        if(strcmp(arr[mid].nim, target) == 0){
            return mid;
        }
        else if(strcmp(arr[mid].nim, target)<0){
            left = mid+1;
        }
        else{
            right = mid-1;
        }
    }
    return -1;
}

int main(){
FILE *myfile = fopen("testdata.in", "r");
int ukuran, dicari;
fscanf(myfile, "%d\n", &ukuran);

struct siswa orang[ukuran];

for(int i=0; i<ukuran; i++){
    fscanf(myfile, "%s %s\n", orang[i].nim, orang[i].nama);
}

fscanf(myfile, "%d\n", &dicari);

char cari[dicari][11];

for(int i = 0; i<dicari; i++){
    fscanf(myfile, "%s\n", cari[i]);
    int hasil = search(orang, 0, ukuran-1, cari[i]);
    if(hasil != -1){
        printf("Case #%d: %s\n", i+1, orang[hasil].nama);
    }
    else{
        printf("Case #%d: N/A\n", i+1);
    }
}
fclose(myfile);
    return 0;
}