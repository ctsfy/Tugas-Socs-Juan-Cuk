#include <stdio.h>
int main(){
int t, n, m, i, j, k;
scanf("%d", &t);
for(i=0; i<t; i++){
    scanf("%d %d", &n, &m);
    int array[m];
    for(j=0; j<m; j++){
        scanf("%d", &array[j]);
    }
    int counter = 0;
    for(j=0; j<m; j++){
        for(k=j+1; k<m; k++){
            if(array[j] == array[k]){
                counter++;
                break;
            }
        }
    }
    printf("Case #%d: %d\n", i+1, counter);
}
    return 0;
}