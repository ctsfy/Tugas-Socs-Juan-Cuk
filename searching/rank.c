#include <stdio.h>
#include <string.h>

struct siswa {
    char nama[11];
    int nilai;
};

void swap(struct siswa *a, struct siswa *b) {
    struct siswa temp = *a;
    *a = *b;
    *b = temp;
}

void sort(struct siswa arr[], int n){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n-i-1; j++){
            if(arr[j].nilai < arr[j+1].nilai){
                swap(&arr[j], &arr[j+1]);
            }
            else if(arr[j].nilai == arr[j+1].nilai && strcmp(arr[j].nama, arr[j+1].nama)>0){
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

int main() {
    int t, i, j, ukuran;
    scanf("%d", &t); getchar();

    for (i = 0; i < t; i++) {
        char name[11];
        scanf("%d", &ukuran); getchar();

        struct siswa orang[ukuran];
        for (j = 0; j < ukuran; j++) {
            scanf("%[^#]#%d", orang[j].nama, &orang[j].nilai); getchar();
        }

        sort(orang, ukuran);
        scanf("%s", &name); getchar();
        
        int hasil = 0;
        for(j=0; j<ukuran; j++){
            if(strcmp(orang[j].nama, name)==0){
                hasil=j+1;
            }
        }
        printf("Case #%d: %d\n", i + 1, hasil);
    }
    return 0;
}