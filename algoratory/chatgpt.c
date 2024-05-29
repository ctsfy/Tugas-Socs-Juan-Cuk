#include <stdio.h>
#include <string.h>

struct mahasiswa {
    char nim[11];
    char nama[21];
};

void mergeAscending(struct mahasiswa arr[], int left, int right) {
    int mid = (left + right) / 2;
    int leftindex = left;
    int rightindex = mid + 1;
    int cur = 0;
    struct mahasiswa temp[right - left + 1];

    while (leftindex <= mid && rightindex <= right) {
        if (strcmp(arr[leftindex].nim, arr[rightindex].nim) <= 0) {
            temp[cur] = arr[leftindex];
            cur++, leftindex++;
        } else {
            temp[cur] = arr[rightindex];
            cur++, rightindex++;
        }
    }

    while (leftindex <= mid) {
        temp[cur] = arr[leftindex];
        cur++, leftindex++;
    }
    while (rightindex <= right) {
        temp[cur] = arr[rightindex];
        cur++, rightindex++;
    }
    for (int i = 0; i < cur; i++) {
        arr[left + i] = temp[i];
    }
}

void mergesortAscending(struct mahasiswa arr[], int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;
        mergesortAscending(arr, left, mid);
        mergesortAscending(arr, mid + 1, right);
        mergeAscending(arr, left, right);
    }
}

void mergeDescending(struct mahasiswa arr[], int left, int right) {
    int mid = (left + right) / 2;
    int leftindex = left;
    int rightindex = mid + 1;
    int cur = 0;
    struct mahasiswa temp[right - left + 1];

    while (leftindex <= mid && rightindex <= right) {
        if (strcmp(arr[leftindex].nama, arr[rightindex].nama) >= 0) {
            temp[cur] = arr[leftindex];
            cur++, leftindex++;
        } else {
            temp[cur] = arr[rightindex];
            cur++, rightindex++;
        }
    }

    while (leftindex <= mid) {
        temp[cur] = arr[leftindex];
        cur++, leftindex++;
    }
    while (rightindex <= right) {
        temp[cur] = arr[rightindex];
        cur++, rightindex++;
    }
    for (int i = 0; i < cur; i++) {
        arr[left + i] = temp[i];
    }
}

void mergesortDescending(struct mahasiswa arr[], int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;
        mergesortDescending(arr, left, mid);
        mergesortDescending(arr, mid + 1, right);
        mergeDescending(arr, left, right);
    }
}

int main() {
    FILE *myfile = fopen("testdata.in", "r");
    int ukuran;
    fscanf(myfile, "%d\n", &ukuran);
    struct mahasiswa orang[ukuran];
    for (int i = 0; i < ukuran; i++) {
        fscanf(myfile, "%s %s", orang[i].nim, orang[i].nama);
    }
    fclose(myfile);

    printf("Sorting Ascending by NIM:\n");
    mergesortAscending(orang, 0, ukuran - 1);
    for (int i = 0; i < ukuran; i++) {
        printf("%s %s\n", orang[i].nim, orang[i].nama);
    }

    printf("\nSorting Descending by Nama:\n");
    mergesortDescending(orang, 0, ukuran - 1);
    for (int i = 0; i < ukuran; i++) {
        printf("%s %s\n", orang[i].nim, orang[i].nama);
    }

    return 0;
}
