#include <stdio.h>
int main(){
int size, ubah, i, j, k;

scanf("%d %d", &size, &ubah);

int arr[size], cari[ubah];

for(i=0; i<size; i++){
    scanf("%d", &arr[i]);
}

for(i=0; i<ubah; i++){
    scanf("%d", &cari[i]);
}

for(i=0; i<ubah; i++){
    for(j=0; j<size; j++){
        if(cari[i] == arr[j]){
            arr[j] = -1;
        }
    }
}

int max = -1;

for(i=0; i<size; i++){
    if(max <= arr[i]){
        max = arr[i];
    }
}
if(max == -1){
    printf("Maximum number is -1\n");
}
else{
    printf("Maximum number is %d\n", max);
}
    return 0;
}