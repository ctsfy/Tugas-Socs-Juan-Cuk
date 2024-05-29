#include <stdio.h>

struct mahasiswa{
    char nama[101];
    char nim[10];
    int umur;
    char post[7];
    char tempat_lahir[101];
    char tanggal_lahir[101];
    char sma[101];
    int saudara;
    int tinggi;
    char norek[10];
};

int main(){
int t, i, j, k;
scanf("%d",&t);
struct mahasiswa ke[t];
for(i=0; i<t; i++){
    scanf("%s %s %d %s %s %s %[^\n] %d %d %s", &ke[i].nama, &ke[i].nim, &ke[i].umur, &ke[i].post,
    &ke[i].tempat_lahir, &ke[i].tanggal_lahir, &ke[i].sma, &ke[i].saudara, &ke[i].tinggi, &ke[i].norek);
}

for(i=0; i<t; i++){
    printf("Mahasiswa ke-%d:\n", i+1);
    printf("Nama: %s\n", ke[i].nama);
    printf("NIM: %s\n", ke[i].nim);
    printf("Umur: %d\n", ke[i].umur);
    printf("Kode Pos: %s\n", ke[i].post);
    printf("Tempat Lahir: %s\n", ke[i].tempat_lahir);
    printf("Tanggal Lahir: %s\n", ke[i].tanggal_lahir);
    printf("Almamater SMA: %s\n", ke[i].sma);
    printf("Jumlah Saudara Kandung: %d\n", ke[i].saudara);
    printf("Tinggi Badan: %d\n", ke[i].tinggi);
    printf("NOMOR REKENING: %s\n", ke[i].norek);
}

    return 0;
}