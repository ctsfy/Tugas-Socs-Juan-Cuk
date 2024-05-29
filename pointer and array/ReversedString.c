#include <stdio.h>
#include <string.h>

int main(){
int t, i, j, k;
scanf("%d", &t);
for(i=0; i<t; i++){
    char pesan[1001], pesan2[1001];
    scanf("%s", pesan);
    int length = strlen(pesan);
    printf("Case #%d : ", i+1);
    for(j=length-1; j>=0; j--){
        pesan2[j] = pesan[j];
        if(j==0){
            printf("%c\n", pesan2[j]);
        }
        else{
            printf("%c", pesan2[j]);
        }
    }
}
    return 0;
}