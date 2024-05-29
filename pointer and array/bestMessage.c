#include <stdio.h>
#include <string.h>

int main() {
    int t, i, j, k;
    char pesan[1001];
    char pesan2[1001];

    scanf("%d", &t);
    getchar();

    for (i = 0; i < t; i++) {
        scanf("%s", pesan);
        for (k = 0; pesan[k] != '\0'; k++) {
            pesan2[k] = pesan[k];
        }
        int length = strlen(pesan);
        printf("Case #%d:\n", i+1);
        for(j=0; j<length; j++){
            if(pesan[j]>='A' && pesan[j] <= 'D'){
                pesan[j] = 'A';
            }
            else if(pesan[j]>='E' && pesan[j] <= 'H'){
                pesan[j] = 'E';
            }
            else if(pesan[j]>='I' && pesan[j] <= 'N'){
                pesan[j] = 'I';
            }
            else if(pesan[j]>='O' && pesan[j] <= 'T'){
                pesan[j] = 'O';
            }
            else if(pesan[j]>='U' && pesan[j] <= 'Z'){
                pesan[j] = 'U';
            }
            if(j==length-1){
                printf("%c\n", pesan[j]);
            }
            else{
                printf("%c", pesan[j]);
            }
        }
        
        for(k=0; k<length; k++){
            if(pesan2[k] == 'A' || pesan2[k] == 'E' || pesan2[k] == 'I' || pesan2[k] == 'O' || pesan2[k] == 'U'){
                pesan2[k] = 0;
            }
            else if (pesan2[k] == 'B' || pesan2[k] == 'F' || pesan2[k] == 'J' || pesan2[k] == 'P' || pesan2[k] == 'V'){
                pesan2[k] = 1;
            }
            else if (pesan2[k] == 'C' || pesan2[k] == 'G' || pesan2[k] == 'K' || pesan2[k] == 'Q' || pesan2[k] == 'W'){
                pesan2[k] = 2;
            }
            else if (pesan2[k] == 'D' || pesan2[k] == 'H' || pesan2[k] == 'L' || pesan2[k] == 'R' || pesan2[k] == 'X'){
                pesan2[k] = 3;
            }
            else if (pesan2[k] == 'M' || pesan2[k] == 'S' || pesan2[k] == 'Y'){
                pesan2[k] = 4;
            }
            else if (pesan2[k] == 'N' || pesan2[k] == 'T' || pesan2[k] == 'Z'){
                pesan2[k] = 5;
            }
            if(k==length-1){
                printf("%d\n", pesan2[k]);
            }
            else{
                printf("%d", pesan2[k]);
            }
        }
    }

    return 0;
}
