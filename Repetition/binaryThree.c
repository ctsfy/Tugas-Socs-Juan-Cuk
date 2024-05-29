#include <stdio.h>
int main(){
int t, i, j, k, l, ukuran, xor;
scanf("%d", &t);
for(i=0; i<t; i++){
    scanf("%d", &ukuran);
    int array[ukuran];
    int nyala = 0;
    int ganyala = 0;
    for(j=0; j<ukuran; j++){
        scanf("%d", &array[j]);
    }

    int counter3 = 0;
    int counterlain = 0;
    for(j=0; j<ukuran; j++){
        for(k=j+1; k<ukuran; k++){
            int counternyala = 0;
            xor = array[j]^array[k];
            for(l=xor; l>0; l/=2){
                if(l%2 == 1){
                    counternyala++;
                }
            }
            if(counternyala>=3){
                counter3++;
            }
            else if(counternyala<3){
                counterlain++;
            }
        }
    }
    printf("Case #%d: %d %d\n", i+1, counter3, counterlain);

}
    return 0;
}