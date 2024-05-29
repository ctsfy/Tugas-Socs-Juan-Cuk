#include <stdio.h>
#include <string.h>

struct kamus {
    char singkatan[51];
    char asli[51];
};

int main() {
    int t, tc;
    FILE *myfile = fopen("testdata.in", "r");
    fscanf(myfile, "%d\n", &t);
    struct kamus kata[t];

    for (int i = 0; i < t; i++) {
        fscanf(myfile, "%[^#]#%s\n", kata[i].singkatan, kata[i].asli);
    }

    fscanf(myfile, "%d\n", &tc);
    for (int i = 0; i < tc; i++) {
        char kalimat[101];
        fscanf(myfile, "%[^\n]\n", kalimat);

        char *token = strtok(kalimat, " ");
        int isFirstToken = 1;

        printf("Case #%d:\n", i+1);
        while (token != NULL) {
            int found = 0;
            for (int j = 0; j < t; j++) {
                if (strcmp(token, kata[j].singkatan) == 0) {
                    if (!isFirstToken) {
                        printf(" ");
                    }
                    printf("%s", kata[j].asli);
                    isFirstToken = 0;
                    found = 1;
                    break;
                }
            }

            if (!found) {
                if (!isFirstToken) {
                    printf(" ");
                }
                printf("%s", token);
                isFirstToken = 0;
            }

            token = strtok(NULL, " ");
        }

        if (!isFirstToken) {
            printf("\n");
        }
    }

    fclose(myfile);
    return 0;
}
