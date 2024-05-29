#include <stdio.h>
int main(){
int t, r, h, i;
scanf("%d", &t);
for(i=0; i<t; i++){
    scanf("%d %d", &r, &h);
    double luas = 2 * 3.14 * r * (r+h);
    printf("Case #%d: %.2lf\n", i+1, luas);
}
    return 0;
}