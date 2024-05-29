#include <stdio.h>
#include <string.h>
int main(){
int t; 
char string[1001];
scanf("%d", &t); getchar();
for(int i=0; i<t; i++){
    scanf("%s", string);
    int length = strlen(string);
    printf("Case %d: ", i+1);
    for(int j=0; j<length; j++){
        if(j==length-1){
            printf("%d\n", string[j]);
        }
        else{
            printf("%d-", string[j]);
        }
    }
}
    return 0;
}