#include <stdio.h>

void ubah(int a, int b){
    if(a==1 && b == 1){
        printf("YES\n");
    }
    else if(a==1 && b!= 1){
        printf("NO\n");
    }
    else if(a>1 && a!=b){
        if(a%2==0){
            ubah(a/2, b);
        }
        else if(a%2==1){
            ubah(a*3+1, b);
        }
    }
    else if(a>1 && a==b){
        printf("YES\n");
    }
}

int main(){
int t, i, j, a, b;
scanf("%d", &t);
for(i=0; i<t; i++){
    scanf("%d %d", &a, &b);
    printf("Case #%d: ", i+1);
    ubah(a, b);
    
}
    return 0;
}