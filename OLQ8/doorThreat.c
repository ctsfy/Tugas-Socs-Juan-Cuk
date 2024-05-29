#include <stdio.h>
int main(){
int t, kamar, ubah, i, j, k;
scanf("%d", &t);
for(i=0; i<t; i++){
    scanf("%d %d", &kamar, &ubah);
    int terbuka[kamar];
    int iseng[ubah];
    int counter = 0;
    for(j=0; j<kamar; j++){
        terbuka[j] = 0; //0 untuk terbuka, 1 untuk terkunci
    }
    for(j=0; j<ubah; j++){
        scanf("%d", &iseng[j]);
    }

    for(k=0; k<ubah; k++){
        for(j=0; j<kamar; j++){
            if((j+1)%iseng[k] == 0 && terbuka[j] == 0){
                terbuka[j] = 1;
            }
            else if((j+1)%iseng[k] == 0 && terbuka[j] == 1){
                terbuka[j] = 0;
            }
        }
    }

    for(j=0; j<kamar; j++){
        if(terbuka[j] == 0){
            counter++;
        }
    }

    printf("Case #%d:", i+1);
    if(counter == 0){
        printf(" No room left!\n");
    }
    else if(counter != 0){
        for(j=0; j<kamar; j++){
            if(terbuka[j]==0){
                printf(" %d", j+1);
            }
        }
        printf("\n");
    }
}
    return 0;
}