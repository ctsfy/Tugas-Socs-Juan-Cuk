#include <stdio.h>
#include <string.h>
struct nama{
    char teman[41];
    char pohon[41];
};

int search(struct nama arr[], int left, int right, char target[]){
    while(left<=right){
        int mid = left + (right-left)/2;
        if(strcmp(arr[mid].teman, target) == 0){
            return mid;
        }
        else if(strcmp(arr[mid].teman, target)>0){
            right = mid-1;
        }
        else{
            left = mid+1;
        }
    }
    return -1;
}

int main(){
FILE *myfile = fopen("testdata.in", "r");
int ukuran, dicari;
fscanf(myfile, "%d\n", &ukuran);
struct nama orang[ukuran];
for(int i=0; i<ukuran; i++){
    fscanf(myfile, "%[^#]#%[^\n]\n", orang[i].teman, orang[i].pohon);
}

fscanf(myfile, "%d\n", &dicari);

char cari[dicari][41];

for(int i = 0; i<dicari; i++){
    fscanf(myfile, "%s\n", cari[i]);
    int hasil = search(orang, 0, ukuran-1, cari[i]);
    if(hasil != -1){
        printf("Case #%d: %s\n", i+1, orang[hasil].pohon);
    }
    else{
        printf("Case #%d: N/A\n", i+1);
    }
}
    return 0;
}