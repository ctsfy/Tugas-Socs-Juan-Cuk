#include <stdio.h>
int main(){
int t, i, j, ukuran;
scanf("%d", &t);

for (i = 0; i < t; i++) {
    scanf("%d", &ukuran);
    int array[ukuran];
    int total = 0;
    for (j = 0; j < ukuran; j++) {
        scanf("%d", &array[j]);
        total += array[j];
    }

    int jumlahJ = 0;
    int ketemu = 0;
    for (j = 0; j < ukuran; j++) {
        if (jumlahJ == total - jumlahJ) {
            ketemu = 1;
            break;
        }
        jumlahJ += array[j];
    }
    
    if (ketemu != 0) {
        printf("Case #%d: Yes\n", i + 1);
    } 
    else {
        printf("Case #%d: No\n", i + 1);
    }
}
    return 0;
}