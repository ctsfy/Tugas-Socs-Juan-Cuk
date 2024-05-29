#include <stdio.h>
int main(){
long long int t, a, i, j, k;
scanf("%lld", &t);
for(i=0; i<t; i++){
    scanf("%lld", &a);
    long long int array[a];
    for(j=0; j<a; j++){
        if(j==0){
            array[0] = 0;
        }
        else if(j==1){
            array[1] = 1;
        }
        else{
            array[j] = array[j-1] + array[j-2];
        }
    }
    printf("Case #%lld: %lld\n", i+1, array[a-1]);
}
    return 0;
}