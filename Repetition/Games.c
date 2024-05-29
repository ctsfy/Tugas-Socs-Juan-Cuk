#include <stdio.h>
#include <string.h>
int main(){
    int t, ukuran, i, j;
    scanf("%d", &t); getchar();
    for(i=0; i<t; i++){
        scanf("%d", &ukuran); getchar();
        char string[ukuran+1];
        scanf("%s", string); getchar();
        int length = strlen(string);
        int counterL = 0;
        int counterB = 0;
        for(j=0; j<length; j++){
            if(string[j] == 'L'){
                counterL++;
            }
            else if(string[j] == 'B'){
                counterB++;
            }
        }
        if(counterL > counterB){
            printf("Lili\n");
        }
        else if(counterL < counterB){
            printf("Bibi\n");
        }
        else{
            printf("None\n");
        }
    }
    return 0;
}