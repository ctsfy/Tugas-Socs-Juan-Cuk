#include <stdio.h>
#include <string.h>

int main(){
int t, i, j, k;
char string[501];
char pal[501];
char cek[501];
scanf("%d", &t); getchar();
for(i=0; i<t; i++){
    scanf("%s", string);
    int length = strlen(string);
    int ketemu = 0;
    for(j=length-1, k=0; j>=0, k<length; j--, k++){
        pal[j] = string[j];
        cek[k] = string[k];
        if(pal[j]!=cek[k]){
            ketemu++;
        }
    }
    if(ketemu>0){
        printf("Case #%d: Nah, it's not a palindrome\n", i+1);
    }
    else{
        printf("Case #%d: Yay, it's a palindrome\n", i+1);
    }
}
    return 0;
}