#include <stdio.h>
int main(){
int barang, perubahan, i, j, barangke, hargabaru;
scanf("%d", &barang);
int array[barang];
for(i=0; i<barang; i++){
    scanf("%d", &array[i]);
}
scanf("%d", &perubahan);
for(i=0; i<perubahan; i++){
    scanf("%d %d", &barangke, &hargabaru);
    printf("Case #%d: ", i+1);
    for(j=0; j<barang; j++){
        array[barangke-1] = hargabaru;
        if(j==barang-1){
            printf("%d\n", array[j]);
        }
        else{
            printf("%d ", array[j]);
        }
    }
}
    return 0;
}