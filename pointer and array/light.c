#include <stdio.h>
int main(){
int t, i, j, k, teman, ruangan, yangdipake;
scanf("%d", &t);
for(i=0; i<t; i++){
    scanf("%d %d %d", &teman, &ruangan, &yangdipake);
    int kamar[ruangan];
    int ubah[teman][ruangan];
    int kepake[yangdipake];
    for(j=0; j<ruangan; j++){
        kamar[j] = 0;
    }

    for(j=0; j<teman; j++){
        for(k=0; k<ruangan; k++){
            scanf("%d", &ubah[j][k]);
        }
    }

    for(j=0; j<yangdipake; j++){
        scanf("%d", &kepake[j]);
    }

    for(j=0; j<yangdipake; j++){
        for(k=0; k<ruangan; k++){
            kamar[k] += ubah[kepake[j]-1][k];
        }
    }

    printf("Case #%d:\n", i+1);
    for(j=0; j<ruangan; j++){
        if(kamar[j]%2==0){
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }
    }
}
    return 0;
}