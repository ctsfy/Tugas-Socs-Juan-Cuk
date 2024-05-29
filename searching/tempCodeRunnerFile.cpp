#include <stdio.h>
#include <string.h>

struct daftar {
    char nim[100];
    char nama[1000];
};

int Search(struct daftar arr[], char a[],int b) {
    for(int i =0; i<b;i++) {
        if (strcmp(arr[i].nim, a) == 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    FILE *myfile = fopen("testdata.in", "r");
    int test;
    fscanf(myfile, "%d", &test);

    struct daftar daftar[test];

    int i=0;
    while (feof(myfile) == 0 && i < test) {
        fscanf(myfile,"%s %[^\n]", daftar[i].nim, daftar[i].nama);
        i++;
    }

    fclose(myfile);

    int jawab;
    scanf("%d", &jawab);
    char cari[jawab][100];
    for(int i=0;i<jawab;i++) {
        scanf("%s",cari[i]);
        int aja=Search(daftar,cari[i], test);
        printf("%d\n",aja);
    }

    return 0;
}