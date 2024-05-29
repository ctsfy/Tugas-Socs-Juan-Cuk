#include <stdio.h>
#include <string.h>
int main(){
int t, perubahan, i, j, k, l, a, b, c;
scanf("%d", &t); getchar();
for(i=0; i<t; i++){
    char string[1001];
    char stringcpy[1001];
    char simpanan;
    scanf("%d %s", &perubahan, string); getchar();
    int length = strlen(string);
    for(j=0; j<perubahan; j++){
        scanf("%d %d", &k, &l);
        while(k<l){
            simpanan = string[k-1];
            string[k-1] = string[l-1];
            string[l-1] = simpanan;
            k++;
            l--;
        }
    }
    printf("Case #%d: %s\n", i+1, string);
}
    return 0;
}