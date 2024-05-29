#include <stdio.h>
#include <string.h>
int main(){
int t, perubahan, i, j, k, l, a, b;
scanf("%d", &t); getchar();
for(i=0; i<t; i++){
    char string[1001];
    char stringcpy[1001];
    scanf("%d %s", &perubahan, string); getchar();
    int length = strlen(string);
    for(j=0; j<perubahan; j++){
        scanf("%d %d", &k, &l);
        for(a=0; a<length; a++){
            if(a == k-1){
                for(b=l-1; b>=k-1; b--){
                    stringcpy[b] = string[b];
                }
            }
            else{
                a+(l-1);
                stringcpy[a];
            }
            printf("%c", stringcpy[a]);
        }
    }
}
    return 0;
}