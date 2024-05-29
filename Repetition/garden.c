#include <stdio.h>
int main(){
int x, y, i, j, k, ubah, x1, y1, perubahan;
scanf("%d %d", &x, &y);
int matrix[x][y];
for(i=0; i<x; i++){
    for(j=0; j<y; j++){
        scanf("%d", &matrix[i][j]);
    }
}

scanf("%d", &ubah);
for(i=0; i<ubah; i++){
    scanf("%d %d %d", &x1, &y1, &perubahan);
    matrix[x1-1][y1-1] = perubahan;
}

for(i=0; i<x; i++){
    for(j=0; j<y; j++){
        if(j==y-1){
            printf("%d\n", matrix[i][j]);
        }
        else{
            printf("%d ", matrix[i][j]);
        }
    }
}
    return 0;
}