#include <stdio.h>

struct musik{
    int qtt;
    char nama[101];
    int harga;
};

int main(){
FILE *myfile = fopen("testdata.in", "r");

int t, i, j, k, barang;
fscanf(myfile, "%d\n", &t);

for(i=0; i<t; i++){
    fscanf(myfile, "%d\n", &barang);
    struct musik alat[barang];
    int sum = 0;
    for(j=0; j<barang; j++){
        fscanf(myfile, "%d#%[^@]@%d\n", &alat[j].qtt, &alat[j].nama, &alat[j].harga);
        sum = sum + (alat[j].qtt*alat[j].harga);
    }
    printf("Customer #%d: Rp %d\n", i+1, sum*85/100);
}
fclose(myfile);
    return 0;
}