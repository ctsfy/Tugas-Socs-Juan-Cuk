#include <stdio.h>
int main(){
int t, a, i, j;
scanf("%d", &t);
for(i=0; i<t; i++){
    scanf("%d", &a);
    printf("Case #%d: ", i+1);
    for(j=0; j<a; j++){
        printf("%c", j + 97);
    }
    printf("\n");
}
    return 0;
}