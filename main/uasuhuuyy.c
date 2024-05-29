#include <stdio.h>
int count = 0;
 fraktal_A(int x) {
 int i;
 if (x <= 0) return;
 else {
 fraktal_A(x - 1);
 for (i = 1; i <= x; i++){
    count++;
    count%1000000000;
 };
 }
}

int main(){
int t;
scanf("%d", &t);
    return 0;
}