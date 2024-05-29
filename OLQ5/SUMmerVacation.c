#include <stdio.h>

int main() {
int t, e, ukuran;
scanf("%d", &t);
for(e=1; e<=t; e++){
    int counter=0;
    scanf("%d", &ukuran);
    int array[ukuran];
    for(int i=0; i<ukuran; i++){
        scanf("%d", &array[i]);
    }
    
    int sama[ukuran];
    for (int k = 0; k < ukuran; k++) {
        sama[k] = 0;
    }

    for (int i = 0; i < ukuran; i++) {
        for (int j = i+1; j < ukuran; j++) {
            for (int k = 0; k < ukuran; k++) {
                if (k != i && k != j && array[k] == array[i] + array[j] && !sama[k]) {
                    counter++;
                    sama[k] = 1;
                }
            }
        }
    }
    printf("Case #%d: %d\n", e, counter);
}
    return 0;
}