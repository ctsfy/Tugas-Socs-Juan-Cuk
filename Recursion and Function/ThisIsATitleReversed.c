#include <stdio.h>
#include <string.h>
void reverse(char string[]){
    int j;
    int length = strlen(string);
    for(j=length-1; j>=0; j--){
        printf("%c", string[j]);
    }
}

int main(){
    int t, i, n;
    scanf("%d", &t); getchar();
    for(i=0; i<t; i++){
        char string[1001];
        scanf("%[^\n]", &string); getchar();
        printf("Case #%d: ", i+1);
        reverse(string);
        printf("\n");
    }
}