#include <stdio.h>
#include <string.h>

struct konten {
    char video[1001];
    char nama[1001];
    int view;
};

void swap(struct konten *a, struct konten *b) {
    struct konten temp = *a;
    *a = *b;
    *b = temp;
}

void sortview(struct konten arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j].view < arr[j + 1].view) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void print(struct konten arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s by %s - %d", arr[i].video, arr[i].nama, arr[i].view);
    }
}

int main() {
    FILE *myFile = fopen("testdata.in", "r");
    struct konten kontenarray[101];
    int i = 0;

    // Membaca data dari file
    while (fscanf(myFile, "%[^#]#%[^#]#%d", kontenarray[i].video, kontenarray[i].nama, &kontenarray[i].view) == 3) {
        i++;
        if (i > 100) {
            break;
        }
    }

    // Menutup file setelah selesai membaca
    fclose(myFile);

    // Mengurutkan dan mencetak data
    sortview(kontenarray, i);
    print(kontenarray, i);

    return 0;
}
