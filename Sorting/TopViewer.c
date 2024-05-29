#include <stdio.h>
#include <string.h>
struct konten {
    char video[1001];
    char nama[1001];
    long long int view;
};
void swap(struct konten *a, struct konten *b) {
    struct konten temp = *a;
    *a = *b;
    *b = temp;
}
void sortview(struct konten arr[], long long int n) {
    for (long long int i = 0; i < n ; i++) {
        for (long long int j = 0; j < n - i - 1; j++) {
            if (arr[j].view < arr[j + 1].view) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void sortsama(struct konten arr[], long long int n) {
    for (long long int i = 0; i < n; i++) {
        for (long long int j = 0; j < n - i - 1; j++) {
            if (arr[j].view == arr[j + 1].view && strcmp(arr[j].video, arr[j+1].video)>0) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}
void print(struct konten arr[], long long int n) {
    for (long long int i = 0; i < n; i++) {
        printf("%s by %s - %lld\n", arr[i].video, arr[i].nama, arr[i].view);
    }
}
int main() {
    FILE *myFile = fopen("testdata.in", "r");
    struct konten kontenarray[101];
    long long int i = 0;
    while (!feof(myFile)) {
        fscanf(myFile, "%[^#]#%[^#]#%d\n", kontenarray[i].video, kontenarray[i].nama, &kontenarray[i].view);
        i++;
        if (i > 100) {
            break;
        }
    }
    fclose(myFile);
    sortview(kontenarray, i);
    sortsama(kontenarray, i);
    print(kontenarray, i);

    return 0;
}