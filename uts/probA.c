#include <Stdio.h>
int main(){
    int t, luas, panjang, lebar, bagi, i, j;
    int total = 0;
    scanf("%d", &t);
    for(i=0; i<=t; i++){
        if(i<t){
            scanf("%d %d", &panjang, &lebar);
            luas = panjang*lebar;
            total+=luas;
        }
        if(i==t){
            scanf("%d", &bagi);
        }
    }
    double hasil = (double)total/bagi;
    printf("%.2lf\n", hasil);
    return 0;
}