#include <stdio.h>
int main(){
    int t, ukuran, n, i, j, indexkanan, indexkiri;
    scanf("%d", &t); getchar();
    for(i=0; i<t; i++){
        scanf("%d %d", &ukuran, &n); getchar();
        char array[ukuran+1];
        scanf("%s", array); getchar();
        

        indexkanan = indexkiri = -1;
        for(j=0; j<ukuran; j++){
            if(array[j] == '1'){
                indexkiri = j;
                break;
            }
        }
        for(j=ukuran-1; j>=0; j--){
            if(array[j] == '1'){
                indexkanan = j;
                break;
            }
        }
        if((indexkiri == indexkanan) && n >= ukuran){
            printf("Case #%d: Alive\n", i+1);
        }
        else if(indexkiri != indexkanan && (indexkiri+1) <= n && (ukuran-indexkanan) <= n){
            printf("Case #%d: Alive\n", i+1);
        }
        else{
            printf("Case #%d: Dead\n", i+1);
        }
    }
    return 0;
}