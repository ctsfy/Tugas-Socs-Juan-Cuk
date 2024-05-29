#include <stdio.h>
int main(){
int t, a, b, c, d, e, i, j;
scanf("%d", &t);
for(i=0; i<t; i++){
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    int counter = 0;
    for(j=1; j<=a; j++){
        if(j%b != 0 && j%c != 0 && j%d != 0 && j%e != 0){
            counter++;
        }
    }
    printf("Case #%d: %d\n", i+1, a-counter);
}
    return 0;
}