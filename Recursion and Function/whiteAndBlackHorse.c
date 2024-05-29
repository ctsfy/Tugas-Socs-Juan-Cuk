#include <stdio.h>

char map[8][8];
int flag = 0;

void kudahitam(int hitambaris, int hitamkolom, int n) {
    if (hitambaris < 0 || hitambaris >= 8 || hitamkolom < 0 || hitamkolom >= 8 || map[hitambaris][hitamkolom] == '\n' 
    || map[hitambaris][hitamkolom] == '\0'|| map[hitambaris][hitamkolom] == '#' || n<0) {
        return;
    }
    map[hitambaris][hitamkolom] = '#';
    n--;
    kudahitam(hitambaris + 2, hitamkolom - 1, n);
    kudahitam(hitambaris + 1, hitamkolom - 2, n);
    kudahitam(hitambaris - 2, hitamkolom - 1, n);
    kudahitam(hitambaris - 1, hitamkolom - 2, n);
    kudahitam(hitambaris - 2, hitamkolom + 1, n);
    kudahitam(hitambaris - 1, hitamkolom + 2, n);
    kudahitam(hitambaris + 2, hitamkolom + 1, n);
    kudahitam(hitambaris + 1, hitamkolom + 2, n);
}

void kudaputih(int putihbaris, int putihkolom, int n) {

    if (putihbaris < 0 || putihbaris >= 8 || putihkolom < 0 || putihkolom >= 8 || map[putihbaris][putihkolom] == '\n'
    || map[putihbaris][putihkolom] == '\0' || n<0) {
        return;
    }
    
    if(map[putihbaris][putihkolom] == '#'){
        flag = 1;
        return;
    }
    n--;

    kudaputih(putihbaris + 2, putihkolom - 1, n);
    kudaputih(putihbaris + 1, putihkolom - 2, n);
    kudaputih(putihbaris - 2, putihkolom - 1, n);
    kudaputih(putihbaris - 1, putihkolom - 2, n);
    kudaputih(putihbaris - 2, putihkolom + 1, n);
    kudaputih(putihbaris - 1, putihkolom + 2, n);
    kudaputih(putihbaris + 2, putihkolom + 1, n);
    kudaputih(putihbaris + 1, putihkolom + 2, n);
}

int main() {
    int t, i, j, langkah;
    int y1, y2;
    char x1, x2;
    scanf("%d", &t);

    for (i = 0; i < t; i++) {
        scanf("%d", &langkah);
        scanf(" %c %d", &x1, &y1);
        scanf(" %c %d", &x2, &y2);

        int blackrow = x1 - 'A';
        int blackcolumn = y1 - 1;
        int whiterow = x2 - 'A';
        int whitecolumn = y2 - 1;

        for (j = 0; j < 8; j++) {
            for (int k = 0; k < 8; k++) {
                map[j][k] = '.';
            }
        }

        kudahitam(blackrow, blackcolumn, langkah);
        kudaputih(whiterow, whitecolumn, langkah);

        if(flag == 1){
            printf("Case #%d: YES\n", i+1);
        }
        else{
            printf("Case #%d: NO\n", i+1);
        }
        

        for (j = 0; j < 8; j++) {
            for (int k = 0; k < 8; k++) {
                map[j][k] = '\0';
            }
        }
        flag = 0;
    }

    return 0;
}
