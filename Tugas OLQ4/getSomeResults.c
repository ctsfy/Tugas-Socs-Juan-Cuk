#include <stdio.h>
int main(){
int t, ukuran, i, j, k, a, b;
scanf("%d", &t);
for(i=0; i<t; i++){
    scanf("%d", &ukuran);
    int matrix1[ukuran][ukuran], matrix2[ukuran][ukuran], matrix3[ukuran][ukuran], kali1[ukuran][ukuran], kali2[ukuran][ukuran];
    // input matrix pertama
    for(a=0; a<ukuran; a++){
        for(b=0; b<ukuran; b++){
            scanf("%d", &matrix1[a][b]);
        }
    }
    //input matrix kedua
    for(a=0; a<ukuran; a++){
        for(b=0; b<ukuran; b++){
            scanf("%d", &matrix2[a][b]);
        }
    }
    //input matrix ketiga
    for(a=0; a<ukuran; a++){
        for(b=0; b<ukuran; b++){
            scanf("%d", &matrix3[a][b]);
        }
    }
    
    //kalikan matrix pertama dan kedua
    for(a=0; a<ukuran; a++){
        for(b=0; b<ukuran; b++){
            kali1[a][b] = 0;
            for(k = 0; k<ukuran; k++){
                kali1[a][b] += matrix1[a][k] * matrix2[k][b];
            }
        }
    }

    //kalikan hasil matrix tadi dengan matrix ketiga
    for(a=0; a<ukuran; a++){
        for(b=0; b<ukuran; b++){
            kali2[a][b] = 0;
            for(k = 0; k<ukuran; k++){
                kali2[a][b] +=  kali1[a][k] * matrix3[k][b];
            }
        }
    }
    //hasil perkalian matrixnya
    printf("Case #%d:\n", i+1);
    for(a=0; a<ukuran; a++){
        for(b=0; b<ukuran; b++){
            if(b == ukuran -1){
                printf("%d", kali2[a][b]);
            }
            else{
                printf("%d ", kali2[a][b]);
            }
        }
        printf("\n");
    }
}
    return 0;
}