#include <stdio.h>
#include <string.h>
int main(){
int t, i, j;
char string[1001];
scanf("%d", &t); getchar();
for(i=0; i<t; i++){
    scanf("%[^\n]", string); getchar();

    printf("Case #%d: ", i+1);
    int size = strlen(string);
    for(j=0; j<size; j++){
        if(string[j] != 'A' && string[j] != 'a' && string[j] != 'I' && string[j] != 'i' && string[j] != 'U' && string[j] != 'u' && string[j] != 'E' && string[j] != 'e' && string[j] != 'O' && string[j] != 'o'){
            printf("%c", string[j]);
        }
    }
    printf("\n");
}
    return 0;
}