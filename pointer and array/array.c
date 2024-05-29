#include <stdio.h>
int main(){
int ukuran, i, j;
scanf("%d", &ukuran);
int index[ukuran], isi[ukuran], hasil[ukuran], isibaru[ukuran];

for(i=0; i<ukuran; i++){
    hasil[i] = 0;
}
for(i=0; i<ukuran; i++){
    scanf("%d", &index[i]);
}
for(i=0; i<ukuran; i++){
    scanf("%d", &isi[i]);
}
for(i=0; i<ukuran; i++){
    hasil[index[i]] = isi[i];
}
for(i=0; i < ukuran; i++){
    if(i==ukuran-1){
        printf("%d\n", hasil[i]);
    }
    else{
        printf("%d ", hasil[i]);
    }
}

    return 0;
}