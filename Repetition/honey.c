#include <stdio.h>
int main(){
int t, a, b, i;
scanf("%d", &t);
for(i=0; i<t; i++){
    scanf("%d %d", &a, &b);
    int counter = 0;
    int kaget = a;
    if(a >= b){
        while(a>1 && a>=b){
            a = a-b+1;
            counter++;
        }
        printf("Case #%d: %d\n", i+1, counter + kaget);
    }
    else{
        printf("Case #%d: %d\n", i+1, a);
    }
}
    return 0;
}