#include <stdio.h>
int main(){
int ukuran, n, i, j;
scanf("%d %d", &ukuran, &n);
int array[ukuran];
for(i=0; i<ukuran; i++){
    scanf("%d", &array[i]);
}

for(i=0; i<ukuran; i++){
    int total = 0;
    int counter = 0;
    if(array[i] == -1){
        for(j=i-n; j<=i+n && j<ukuran; j++){
            if(array[j] == -1){
                continue;
            }
            else{
                total+=array[j];
                counter++;
            }
        }
        array[i] = total/counter;
    }
    if(i==ukuran-1){
        printf("%d\n", array[i]);
    }
    else{
        printf("%d ", array[i]);
    }
}
    return 0;
}