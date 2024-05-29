#include <stdio.h>
#include <string.h>
void palcheck(char string[]){
    int j, k;
    int length = strlen(string);
    int ketemu = 0;
    for(j=length-1, k=0; j>=0, k<length; j--, k++){
        if(string[j]!=string[k]){
            ketemu++;
        }
    }
    if(ketemu>0){
        printf("no\n");
    }
    else{
        printf("yes\n");
    }
}

int main(){
    int t, i, j;
    scanf("%d", &t); getchar();
    for(i=0; i<t; i++){
        char string[1001];
        scanf("%s", string); getchar();
        printf("Case #%d: ", i+1);
        palcheck(string);
    }
}