#include <stdio.h>
int main(){
int t, a, b, c, d, e, f, i, j;
scanf("%d", &t);
for(i=0; i<t; i++){
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
    printf("Case #%d: ", i+1);
    for(j=0; j<a; j++){
        printf("a");
    }
    for(j=0; j<b; j++){
        printf("s");
    }
    for(j=0; j<c; j++){
        printf("h");
    }
    for(j=0; j<d; j++){
        printf("i");
    }
    for(j=0; j<e; j++){
        printf("a");
    }
    for(j=0; j<f; j++){
        if(j==f-1){
            printf("p\n");
        }
        else{
            printf("p");
        }
    }
}
    return 0;
}