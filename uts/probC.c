#include <stdio.h>
int main(){
    int ukuran, i, j;
    scanf("%d", &ukuran);
    int array[ukuran];
    int total = 0;
    for(i=0; i<ukuran; i++){
        scanf("%d", &array[i]);
        total+=array[i];
        while(total>9){
            int puluhan = total/10;
            int satuan = total%10;
            total = puluhan + satuan;
        }
    }
    printf("%d\n", total);
    return 0;
}