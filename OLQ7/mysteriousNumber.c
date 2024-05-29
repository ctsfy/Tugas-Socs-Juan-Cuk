#include <stdio.h>
#include <math.h>
int main(){
int t, i, j, a;
scanf("%d", &t);
for(i=0; i<t; i++){
    scanf("%d", &a);
    printf("Case #%d : ", i+1);
    //cek prima apa kagak:
    int cekprima = sqrt(a);
    int counterprima = 0;
    int penentuprima = 0;
    if(a==1){
        printf("square cubic\n");
    }
    else{
        for(j=1; j<=cekprima; j++){
            if(a%j==0){
                counterprima++;
            }
        }
        if(counterprima==1){
            printf("prime\n");
        }
        else{
            //cek dia kuadrat atau kubik gk
            double akar = sqrt(a);
            double kubik = cbrt(a);
            int counterakar = 0;
            int counterkubik = 0;

            //cek kuadrat:
            if((akar-(int)akar) == 0){
                counterakar++;
            }

            //cek kubik:
            if((kubik - (int)kubik) == 0){
                counterkubik++;
            }
        
            if(counterakar>0 && counterkubik>0){
                printf("square cubic\n");
            }
            else if(counterakar>0 && counterkubik==0){
                printf("square\n");
            }
            else if(counterakar==0 && counterkubik>0){
                printf("cubic\n");
            }
            else if(counterakar==0 && counterkubik==0){
                printf("none\n");
            }
        }
    }
}
    return 0;
}