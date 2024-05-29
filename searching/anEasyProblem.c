#include <stdio.h>
int main(){
int ukuran, i, j;
scanf("%d", &ukuran);
int arr[ukuran];
for(i=0; i<ukuran; i++){
    scanf("%d", &arr[i]);
}

int count = 0;
for(i=0; i<ukuran; i++){
    if(arr[i] == 1){
        count++;
    }
}

if(count>0){
    printf("not easy\n");
}
else if(count == 0){
    printf("easy\n");
}
    return 0;
}