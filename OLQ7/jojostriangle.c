#include <stdio.h>
int main(){
int t, a, b, c, i, temp;
scanf("%d", &t);
for(i=0; i<t; i++){
    scanf("%d %d %d", &a, &b, &c);
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        temp = a;
        a = c;
        c = temp;
    }
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }

    if(a<=b && b<=c && a<=c && a+b>c){
        printf("BISA\n");
    }
    else{
        printf("TIDAK BISA\n");
    }
}
    return 0;
}