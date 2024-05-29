#include <stdio.h>
int main (){
int ukuran, i, j, k;
scanf("%d", &ukuran);
int matrix[ukuran][ukuran];
int nahloh = 0;

for(i=0; i<ukuran; i++){
    for(j=0; j<ukuran; j++){
        scanf("%d", &matrix[i][j]);
   }
}
for(i=0; i<ukuran; i++){
    int counter = 0;
    for(j=0; j<ukuran; j++){
        for(k=0; k<ukuran; k++){
            if(matrix[i][j] == matrix[i][k] && matrix[i][j] == matrix[k][j]){
                counter++;
            }
        }
        if(counter>1){
            nahloh=1;
            break;
        }
   }
}
if(nahloh==1){
    printf("Nay\n");
}
else{
    printf("Yay\n");
}
    return 0;
}