#include <stdio.h>
#include <string.h>
int main(){
int t, i, j, ubah, k;
scanf("%d", &t); getchar();
for(i=0; i<t; i++){
    char string[1001];
    char a, b;
    scanf("%s", &string); getchar();
    int length = strlen(string);
    scanf("%d", &ubah); getchar();
    for(k=0; k<ubah; k++){
        scanf("%c %c", &a, &b); getchar();
        for(j=0; j<length; j++){
            if(string[j] == a){
                string[j] = b;
            }
        }
    }
    printf("Case #%d: %s\n", i+1, string);
    
}
    return 0;
}