#include <stdio.h>

int main() {
    int t, kamar, ubah, i, j, k;
    scanf("%d", &t);

    for (i = 0; i < t; i++) {
        scanf("%d %d", &kamar, &ubah);
        int ruangan[kamar];
        int iseng[ubah];
        int 

        for (j = 0; j < kamar; j++) {
            ruangan[j] = 0; // 0 untuk terbuka, 1 untuk terkunci
        }

        for (k = 0; k < ubah; k++) {
            scanf("%d", &iseng[k]);
        }

        for (k = 0; k < ubah; k++) {
            for (j = 0; j < kamar; j++) {
                if (ruangan[j] % iseng[k] == 0) {
                    ruangan[j] = 1;
                }
            }
        }

        printf("Case #%d: ", i + 1);

        for (j = 0; j < kamar; j++) {
            if (ruangan[j] == 0) {
                printf("%d ", j);
            }
        }

        printf("\n");
    }

    return 0;
}
