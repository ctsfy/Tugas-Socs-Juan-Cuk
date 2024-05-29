#include <stdio.h>
int main(){
int t, n, j, k;
scanf("%d", &t);
for(int i=1; i<t+1; i++){
    scanf("%d", &n);
    printf("Case %d: ", i);
    for(j=1; j<=n; j++){
        for(k=0; k<n; k++){
            j+=k;
            if(k == n-1){
                printf("%d\n", j);
            }
            else{
                printf("%d ", j);
            }
        }
    }
}
    return 0;
}